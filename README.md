Taxonomy Set Lineage
====================

This is a simple module that automatically selects parent terms in a taxonomy.

For instance, imagine a "Geography" taxonomy having all continents, countries
and cities in a tree structure. Users are then asked to tag a piece of content
with this taxonomy. Suppose a user tags a piece of content with "Berlin". Using
the normal Backdrop taxonomy system, this would be the only term applied in our
tree. The content would not be able to be found under "Germany" or "Europe".
What this little module does is simply make sure that these parent terms are
also selected at the time a piece of content is saved.

By selecting the "Geography" taxonomy in the module administration screens, a
user can ensure that these parent terms are selected and hierarchical taxonomies
become more powerful.

How It Works
------------

If any vocabularies have lineage set, we check entities when they are saved to
see if they have fields referring to these vocabularies. If so, we automatically
select all parent terms of manually selected terms.

Note that this does not override the maximum number of terms selectable in a
field. If for a given field, content creators are only allowed to select one
term, this module will not be able to set any parent terms in that field.

This module should work with any Backdrop language / i18n / localization
strategy. This module will only set parents on the terms in the language that
was just changed / edited. That means in a multilingual field with terms
selectable independently for each language, if you change which French taxonomy
terms are selected, only the French terms will be processed to select parents,
not the English terms on the same field. This follows the principle of least
surprise.

Installation
------------

- Install this module using the official Backdrop CMS instructions at
  https://backdropcms.org/guide/modules.

- Visit the configuration page under Administration > Structure > Taxonomy >
  Taxonomy Set Lineage (`/admin/structure/taxonomy/taxonomy_set_lineage`) to
  select which vocabularies to set the lineage for.

Issues
------

Bugs and Feature requests should be reported in the Issue Queue:
https://github.com/backdrop-contrib/taxonomy_set_lineage/issues.

Current Maintainers
-------------------

- Seeking maintainer(s)

Credits
-------

- Ported to Backdrop CMS by [Peter Anderson](https://github.com/BWPanda).
- Originally written for Drupal by [yareckon](https://www.drupal.org/u/yareckon).

License
-------

This project is GPL v2 software.
See the LICENSE.txt file in this directory for complete text.
