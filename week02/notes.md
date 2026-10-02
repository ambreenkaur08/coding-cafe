# Lab 01 Answers

### 1. What did `pwd` print?

`pwd` printed `/mnt/c/WINDOWS/system32/coding-cafe`. This showed that I was working inside the `coding-cafe` directory on the Windows C: drive.

### 2. What did `ls -a` show that plain `ls` did not?

`ls -a` showed hidden files and directories that plain `ls` did not show. Hidden files usually have names beginning with a `.`.

### 3. Pick one line from `ls -l`. What do you think the first column means?

The first column shows the file type and permissions. A `d` at the beginning means the item is a directory, while `-` means it is a regular file.

### 4. Why does `ls coding-cafe/week02` work from where you are standing? Which kind of path is it?

It works because `coding-cafe/week02` describes the location relative to my current directory. Therefore, it is a **relative path**, not an absolute path.

### 5. `mv` did two different jobs above. What were they?

The first `mv` moved `README-backup.md` into the `week01` directory. The second `mv` renamed it from `README-backup.md` to `old-readme.md`.

### 6. How many folders are on your `PATH`?

I ran `echo $PATH` to see the folders in my PATH. They are separated by `:`, so I can count the sections separated by each colon to find the total number of folders.

### 7. Write down exactly where your `python3` lives.

I used `which python3` to find the location of `python3`. The exact path is given by the output of that command.

### 8. Compare your answer to 7 with the person next to you. Are they the same?

They might not be the same because Python can be installed in different locations on different computers. The PATH and system configuration can therefore be different.

### 9. What exactly did the shell say? Explain the error using PATH.

The shell said `pyton3: command not found`. This happened because `pyton3` was misspelled, so the shell searched the directories in my PATH but could not find a command with that name.

### 10. `.venv` did not appear with plain `ls`. Why not?

`.venv` did not appear because it is a hidden directory. Its name starts with `.`, so I needed to use `ls -a` to see it.

### 11. What changed about your prompt?

After activating the virtual environment, `(.venv)` appeared at the beginning of my terminal prompt. This showed that the virtual environment was active.

### 12. Compare this with what you wrote down for question 7.

`which python3` gave a different location after the virtual environment was activated. This means that activating `.venv` changed my PATH so that the Python inside the virtual environment was found first.

### 13. What is in the second list that was not in the first?

The second `pip list` contained the `requests` package, which was not in the first list. I installed it using `pip install requests` while the virtual environment was active.

### 14. Where does `python3` point now?

After running `deactivate`, `which python3` pointed back to the normal system Python instead of the Python inside `.venv`. Deactivating the environment restored my original PATH.

### 15. Find what `ls -h` does.

The `-h` option makes file sizes human-readable. It displays sizes using units such as KB, MB and GB instead of only showing raw byte counts.

### 16. What is the difference between Ctrl + C and Ctrl + D?

`Ctrl+C` interrupts the program that is currently running. `Ctrl+D` sends an end-of-input signal, which can exit an interactive program such as the Python shell when it is waiting for input.