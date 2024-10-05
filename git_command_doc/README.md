# Git Command Reference Guide

## Introduction
This guide provides a complete list of essential Git commands and their usage in Git Bash, Windows Command Prompt, and Linux Terminal. These commands help in managing your Git repositories efficiently.

## Installation
### Git Bash
- Download Git Bash from the official [Git website](https://git-scm.com/).
- Follow the installation instructions.

### Windows Command Prompt
- Download Git for Windows from the official [Git website](https://git-scm.com/).
- Use Git Bash or Git GUI.

### Linux Terminal
- Install Git using the package manager:
  ```sh
  sudo apt-get install git  # For Debian-based distributions
  sudo yum install git      # For Red Hat-based distributions
  ```

## Basic Commands

### Configuring User Information
```sh
git config --global user.name "Your Name"
git config --global user.email "you@example.com"
```

### Initializing a Repository
```sh
git init
```

### Cloning a Repository
```sh
git clone <repository_url>
```

### Checking Status
```sh
git status
```

### Adding Files
- Add a specific file:
  ```sh
  git add <file_name>
  ```
- Add all files:
  ```sh
  git add .
  ```

### Committing Changes
```sh
git commit -m "Your commit message"
```

### Viewing Commit History
```sh
git log
```

### Creating a New Branch
```sh
git branch <branch_name>
```

### Switching to a Branch
```sh
git checkout <branch_name>
```

### Creating and Switching to a New Branch
```sh
git checkout -b <branch_name>
```

### Merging Branches
```sh
git checkout <branch_name_to_merge_into>
git merge <branch_name_to_merge_from>
```

### Deleting a Branch
```sh
git branch -d <branch_name>
```

## Remote Repositories

### Adding a Remote Repository
```sh
git remote add origin <repository_url>
```

### Fetching Changes from Remote
```sh
git fetch origin
```

### Pushing Changes to Remote
```sh
git push origin <branch_name>
```

### Pulling Changes from Remote
```sh
git pull origin <branch_name>
```

## Handling Conflicts

### Checking for Conflicts
```sh
git status
```

### Resolving Conflicts
1. Open the conflicting files and make necessary edits.
2. Add the resolved files:
    ```sh
    git add <resolved_file>
    ```
3. Commit the changes:
    ```sh
    git commit -m "Resolved merge conflict"
    ```

## Advanced Commands

### Stashing Changes
```sh
git stash
```

### Applying Stashed Changes
```sh
git stash apply
```

### Viewing Stashes
```sh
git stash list
```

### Deleting a Stash
```sh
git stash drop <stash_name>
```

## Conclusion
This documentation serves as a quick reference for Git commands used in Git Bash, Windows Command Prompt, and Linux Terminal. For more detailed information, refer to the official Git documentation.
