--global saves the setting for your whole user account, so it applies to every repo. Without it, the setting applies only to the current repository.
The hidden .git folder appeared. It holds the repo's full history, config and tracking data.
Write the number you saw. Anything you didn't write yourself, like .venv/, shouldn't be tracked.
The .venv/ contents disappeared from the untracked list, because Git now ignores them.
It should be committed. It's a project file, so anyone who clones the repo gets the same ignore rules.
README.md moved from "Untracked files" to "Changes to be committed", meaning from the working directory to the staging area.
Git prints the branch, the short hash, your message, and a summary like "N files changed". Use the numbers from your own screen.
It's the short commit hash, a unique ID for that commit. You use it to refer to the commit in other commands.
Edit files, check with git status, stage with git add, then git commit.
GitHub displays README.md automatically as the project's front page, so it has a standard name and sits in the root folder.
It stored an access token on your machine, and Git uses that token when you push, so it never asks for a password.
The front page shows your README.md, rendered as formatted text, because GitHub displays the README of every repo it hosts.
No. Pushing copies your commits to GitHub and leaves your local history unchanged.
A private repo exists on GitHub and is visible only to you and the people you invite. If no repo exists, there is no online copy at all.