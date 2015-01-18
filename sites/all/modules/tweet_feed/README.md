Tweet Feed v2.0
==========

NOTE THAT THE CURRENT WORKING DEFAULT BRANCH IS FOR THE VERY NEW v2.0 OF TWEET FEED. TO GET THE CODE FOR THE 1.x BRANCH PLEASE OBTAIN FROM DRUPAL.ORG OR BE SURE TO SWITCH BRANCHES USING THE PULLDOWN ABOVE.

A module to integrate Twitter feeds using Views. Works with Twitter API v1.1 - all you need are the access tokens from a created application. You can specify to pull tweets by timeline or search. These are then presented using Views (sample view template provided) where you can display imported information and filter by criteria. A new feature is a contextual filter which can be added to filter tweets by hashtag.

This module also creates linked URLs from URLs, Hash Tags and Usernames inside the feed itself.

Requires:
Oauth (Oauth Common)
Views

This module exists thanks to the generous support of HighWire Press and Stanford University.

Contextual views inspiration and refinement compliments of Ashley Hall in conjunction with the development of the Symposiac conference platform, supported by the Institute for the Arts and Humanities and UNC.

You will need to provide an API Key, API Secret Key, Access Token and Access Token Secret that you get from your API on Twitter. Once those have been provided you will also want to enter a term by which to search twitter. This should contain the criteria by which you wish to extract data from Twitter.

Once this data is saved, run the cron. It will pull in tweets if everything is configured correctly with your tokens. Note that the API only returns tweets within the last 30 days.

From there you will need to use the view (a sample of which is included with the module). Look for the Tweet Feed disabled view, make a clone of it and configure what you need from it.