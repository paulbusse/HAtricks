# Home Assistant DB backup

Within Home Assistant I use 2 sqlite database:

* one for Home Assistant itself
* one for DeCONZ

Note that I need to move the DeCONZ database to a different location. Ever since I started using it.

## How it works

The procedure has uses the `VACUUM` instruction from Sqlite. This makes sures that the structure in the backup database is consistent. This means that I loose at a maximum 1 day of data.

However when the database gets too large, this takes too much time and Home Assistant gives me an error:

```
 The recorder queue reached the maximum size of 30000; Events are no longer being recorded
 ```

 To prevent that from happening, we will clone the database before VACUUMing it, if the database is bigger then 1GB.

 However, you have to make sure that you have at least 2 times the size of the database free.

 ## How to use

 I start it from a crontab. You can copy the crontab file to `/etc/cron.d`

 ```bash
 $ sudo cp crontab /etc/cron.d/homeassistant
 ```

Of course you must change the path to `backup_prep` to the correct one first.

Also edit the script and make sure you initialize the variables at the top of the script.

## Dependencies

The script uses 
* `gzip`: file compression
* `stat`: display file or file system status