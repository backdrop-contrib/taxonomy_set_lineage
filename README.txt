This is a small module that allows users to tag a heirarchical taxonomy as requiring each parent term of a selected term to be automatically selected.

For instance, imagine a "Geography" taxonomy having all continents, countries and cities in a tree structure. Users are then asked to tag a piece of content with this taxonomy. Suppose a user tags a piece of content with "Berlin". Using the normal drupal taxonomy system, this would be the only term applied in our tree. The content would not be able to be found under "Germany" or "Europe". What this little module does is simply make sure that these parent terms are also selected at the time a piece of content is saved.

By selecting the "Geography" taxonomy in the module administration screens, a user can ensure that these parent terms are selected and heirarchical taxonomies become more powerful.

Configuration screens are found at admin/config/content/taxonomy_set_lineage