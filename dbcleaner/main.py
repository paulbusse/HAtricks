import sqlite3
import sys
import time

DELETE_LIMIT = 998
SLEEP = 120

file = sys.argv[1]
print(file)
con = sqlite3.connect(file)

cur = con.cursor()

result = cur.execute(
    "SELECT count(*) FROM events "
    "  WHERE event_type = 'folder_watcher' "
)
todelete = cur.fetchone()[0]

print(f"Records to delete: {todelete}")

while con.total_changes < todelete:
    result = cur.execute(
        f"DELETE FROM events WHERE event_type = 'folder_watcher' LIMIT {DELETE_LIMIT}"
    )
    cur.execute("COMMIT")
    pct = 100.0 * con.total_changes / todelete
    print( f"Deleted {con.total_changes} of {todelete} records ({pct:.2f}%)")
    time.sleep(SLEEP)


con.close()