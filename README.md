# ChessGame
Application of graph theory with a checkers game program. This game will effectively display the aspects of a directed graph.

**Note Essential commands to  get you started with your initial commit:**

The `git clone` command makes a local copy of the repository, the two most common methods are with:
* HTTPS - `git clone https://github.com/txddyyoung/ChessGame.git`  
* SSH - `git clone git@github.com:txddyyoung/ChessGame.git`

`git status` - Displays the state of the working directory and the staging area. Allowing you to confirm chnges to the to the repository.

`git pull` - Allow you to fetch files from the remote repository and update your local repository to match the latest working version.

`git branch <branch-name>` is necessary to create a branch so you can work on your feature/bug-fix/GUI etc. **Pull request is required. No one will be allowed  to merge directly into main**. Branch creation example `git branch Update-essential-git-commands-within-readme`

Use `git checkout <branch-name>` to move to created branch, e.g. `git checkout Update-essential-git-commands-within-readme` 

***<p style="text-align: center;">You can now make necessary changes to the repository!</p>***
 **Note: Continuously update branch you're working on with the changes of the main branch with the command** `git pull <remote> <branch>` e.g. `git pull origin main`

After saving changes, the command to stage them is `git add`&nbsp; -
* `git add .` &nbsp; which is used to stage **all** changed files.
* `git add <"file">` &nbsp; which is user to stage 1 file.

`git commit -m "message "` &nbsp; is used to save changes to your local repository. *Note: try your best to write **Short, Clear** and **concise** commit messages in **present tense*** e.g,`git commit -m "Update essential git commands within readme"`

If you have made a mistake and want to reverse your commit use the command `git reset --soft HEAD~`

Finally push changes for review so it can be merged into main branch. The commands to do the vary:
* `git push`  &nbsp; it is possible to use this command without any specifics and it will work as intended
* `git push <remote> <branch>` this command specifies the remote and branch the changes will be pushed to. Use example, `git push origin main`

***<p style="text-align: center;">Complete pull request in github!</p>***

An important pair of commands you should utilize is `git stash` and `git stash pop` These commands allow you to store away all your changes separately from the repository and readd them when needed.
