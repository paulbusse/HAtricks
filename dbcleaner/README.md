# DB Cleanup

I had 3.5 million events in the database of type `folder_watcher`. No one ever waited for these events but they would take roughly 700MB in the database, excluding the indexes.

This scripts, deletes those events at a slow pace: +- 1000 every 2 minutes. This pace allows HA to continue to behave properly, while still reducing the size of the database. It has to run for almost 5 days though.

Deleting events should only be done if they are not referenced by a state change. So do not use this script without thinking. If I need additional
cleanup scripts, I will add to this. But right now it does what it needs to do.

Inspiration for this comes from the purge component in HA.