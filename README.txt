Taxonomy set Lineage

This is a small module that allows users to tag a hierarchical taxonomy 
as requiring each parent term of a selected term to be automatically selected.

For instance, imagine a "Geography" taxonomy having all continents, countries 
and cities in a tree structure. Users are then asked to tag a piece of content 
with this taxonomy. Suppose a user tags a piece of content with "Berlin". 
Using the normal drupal taxonomy system, this would be the only term applied 
in our tree. The content would not be able to be found under "Germany" or 
"Europe". What this little module does is simply make sure that these parent 
terms are also selected at the time a piece of content is saved.

By selecting the "Geography" taxonomy in the module administration screens, 
a user can ensure that these parent terms are selected and hierarchical 
taxonomies become more powerful.

How it works:
If any vocabularies have lineage set, we check entities when they are
saved to see if they have fields referring to these vocabularies.  If so,
we automatically select all parent terms of manually selected terms. Note that
this does not override the maximum number of terms selectable in a field. If
for a given field, content creators are only allowed to select one term, this
module will not be able to set any parent terms in that field.

This module should work with any drupal language / i18n / localization strategy.

Configuration can be found at admin/structure/taxonomy/taxonomy_set_lineage or 
on the Taxonomy set Lineage tab visible from the taxonomy administration screen.
