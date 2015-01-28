<?php
/**
 * @file
 * Facebook feeds parser class.
 */

/**
 * Class definition for Facebook Parser.
 */
class FeedsFacebookParser extends FeedsParser {

  /**
   * Verifies this has properties of a page post we want. This is arbitrarily set to the BHCHP page ID right now, in code below.
   * @return true if the post is acceptable.
   */
  public function checkValidPagePost($entry) {
    // if its a kind of Status without actions and the To is us (incoming) reject it 
    if ($entry->type == "status" && (!isset($entry->actions)) && $entry->to->data[0]->id == 44569825308 ) {
      //drupal_set_message(t('NO negative post:TYPE status set: ' 
      //  . 'statustype:'. $entry->status_type . ' type:' . $entry->type . ' story: ' . $entry->story . '//MSG: '
      //  . $entry->message), "status");
      return false;
    }
    // if the message is false and there are no actions reject it 
    if ($entry->type == "status" && (!isset($entry->actions)) && $entry->message == false ) {
      //drupal_set_message(t('NO negative post:TYPE MSG=FALSE set: ' 
      //  . 'statustype:'. $entry->status_type . ' type:' . $entry->type . ' story: ' . $entry->story . '//MSG: '
      //  . $entry->message), "status");
      return false;
    }
    // if privacy has a description and the setting is public, accept it. (seems like real feed items always have view perm object)
    if (isset($entry->privacy->description) && $entry->privacy->description == "Public") { 
      //drupal_set_message(t('OK post privacy isprivacydesc' . $entry->privacy->description . 'statustype:'. $entry->status_type . ' type:' . $entry->type . ' story: ' . $entry->story . '//MSG: ' . $entry->message), "status");
      return true;
    }
    // if it is sent to our ID reject it. external.
    if (isset($entry->to) && $entry->to->data[0]->id == 44569825308 ) {
       //drupal_set_message(t('NO neg. incoming post:TO set: ' 
       // . 'statustype:'. $entry->status_type . ' type:' . $entry->type . ' story: ' . $entry->story . '//MSG: '
       // . $entry->message), "status");
      return false;     
    }
    // return true by default. switch this to false if there are false positives!
    else {
      //drupal_set_message(t('OK valid post: ' 
      //  . 'statustype:'. $entry->status_type . ' type:' . $entry->type . ' story: ' . $entry->story . '//MSG: '
      //  . $entry->message), "status");
      return true;  
    }
  }

  public function parse(FeedsSource $source, FeedsFetcherResult $fetcher_result) {
    $facebook_feed = $fetcher_result->getRaw();
    $result = new FeedsParserResult();

    $json = json_decode($facebook_feed);

    //dpm($json);
    $items = array();
    $i = -1; //iterator to catch where we are on the results $items[]
    foreach ($json->data as $entry) {
      if ($this->checkValidPagePost($entry)) { // custom checker function
        $i++;
        $items[] = array(
          'post_id' => $entry->id,
          'from_name' => $entry->from->name,
          'from_category' => $entry->from->category,
          'from_id' => $entry->from->id,
          'to_name' => (isset($entry->to)      ? $entry->to->data[0]->name : ''),
          'to_category' => (isset($entry->to)  ? $entry->to->data[0]->category : ''),
          'to_id' => (isset($entry->to)        ? $entry->to->data[0]->id : ''),
          'message' => $entry->message,
          'picture' => (isset($entry->picture) ? $entry->picture : ''),
          'link' => (isset($entry->link)       ? $entry->link : ''),
          'source' => (isset($entry->source)   ? $entry->source : ''),
          'name' => (isset($entry->name)       ? $entry->name : substr((string) $entry->message, 0, 255)),
          'caption' => (isset($entry->caption) ? $entry->caption : ''),
          'description' => (isset($entry->description) ? $entry->description : $entry->message),
          'icon' => (isset($entry->icon)       ? $entry->icon : ''),
          'type' => (isset($entry->type)       ? $entry->type : ''),
          'likes_count' => (isset($entry->likes) ? $entry->likes->count : 0),
          'likes' => (isset($entry->likes)     ? json_encode($entry->likes) : ''),
          'comments_count' => (isset($entry->comments) ? $entry->comments->count : 0),
          'comments' => (isset($entry->comments) ? json_encode($entry->comments) : ''),
          'created_time' => $entry->created_time,
          'updated_time' => $entry->updated_time,
          'entry_url' => (isset($entry->actions) ? $entry->actions[0]->link : ''),
        );
        //dpm($items[$i], 'current item');
        //dpm($entry->actions, 'entry actions');
        if ($items[$i]->message == "") {
          //dpm($items[$i]);
          $items[$i]['message'] = substr((string) $items[$i]['message'] . $items[$i]['description'], 0, 255); //truncates
          //dpm($items, 'all items');
          //dpm($entry, 'this entry');
          //drupal_set_message(t('set message to ' . $items[$i]['message'] ), 'status');
          //dpm($items[$i], 'current item post processing');
        } else
        { 
          //drupal_set_message(t('message was not blank'), "status");
        }

      }
    }
    // end of foreach
    //dpm($items, 'FINAL ITEMS');
    $result->items = $items;
    return $result;
  }

  public function getMappingSources() {
    return parent::getMappingSources() + array(
      'post_id' => array(
        'name' => t('Post id'),
        'description' => t('Facebook post id'),
      ),
      'from_name' => array(
        'name' => t('From: name'),
        'description' => t(''),
      ),      
      'from_category' => array(
        'name' => t('From: category'),
        'description' => t(''),
      ),
      'from_id' => array(
        'name' => t('From: id'),
        'description' => t(''),
      ),
      'to_name' => array(
        'name' => t('To: name'),
        'description' => t(''),
      ),      
      'to_category' => array(
        'name' => t('To: category'),
        'description' => t(''),
      ),
      'to_id' => array(
        'name' => t('To: id'),
        'description' => t(''),
      ),  
      'message' => array(
        'name' => t('Message'),
        'description' => t(''),
      ),
      'picture' => array(
        'name' => t('Picture'),
        'description' => t('Picture or screenshot of the post'),
      ),
      'name' => array(
        'name' => t('Name'),
        'description' => t('Post name, could be a file name'),
      ),
      'link' => array(
        'name' => t('Link'),
        'description' => t(''),
      ),
      'source' => array(
        'name' => t('Source'),
        'description' => t('Music file source'),
      ),      
      'description' => array(
        'name' => t('Description'),
        'description' => t(''),
      ),
      'icon' => array(
        'name' => t('Icon'),
        'description' => t(''),
      ),
      'type' => array(
        'name' => t('Type'),
        'description' => t('Type of post'),
      ),
      'likes' => array(
        'name' => t('Likes'),
        'description' => t('Likes json encoded'),
      ),
      'likes_count' => array(
        'name' => t('Likes count'),
        'description' => t('Number of likes'),
      ),      
      'comments' => array(
        'name' => t('Comments'),
        'description' => t('Comments json encoded'),
      ),
      'comments_count' => array(
        'name' => t('Comments count'),
        'description' => t('Number of comments'),
      ),            
      'created_time' => array(
        'name' => t('Created time'),
        'description' => t('Date/time'),
      ),
      'updated_time' => array(
        'name' => t('Updated time'),
        'description' => t('Date/time'),
      ),
      'entry_url' => array(
        'name' => t('URL of page post entry'),
        'description' => t('Direct URL to comment on'),
      )
    );
  } 
}
