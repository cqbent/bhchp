Field Tools
===========

Field Tools is a collection of useful tools for working with fields.

The module adds the following functionality:

- Field tools overview at admin/reports/fields/tools
  - Mass editing of field instances, from the field tools overview page
- Graph of relationships between entities at admin/reports/fields/graph
  This requires GraphAPI; the Springy graph engine is recommended
  (https://www.drupal.org/sandbox/joachim/2330333).
- Extra operations on field instances. These are added as extra tabs to all
  entity bundle admin pages:
  - Cloning of field instances from the current bundle to other bundles.
  - Cloning of field instances to the current bundle from other bundles.
  - Import and export of fields.
  - Renaming of fields (WARNING: doesn't handle field data!).