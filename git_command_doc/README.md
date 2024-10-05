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

## Basic Commands
Configuring User Information: 

git config --global user.name "Your Name"
git config --global user.email "you@example.com"

### Initializing a Repository
git init

### Cloning a Repository
git clone <repository_url>

### Checking Status
git status

### Adding Files
git add <file_name>    # Add a specific file
git add .              # Add all files

### Committing Changes
git commit -m "Your commit message"

### Viewing Commit History
git log

### Creating a New Branch
git branch <branch_name>

### Switching to a Branch
git checkout <branch_name>

### Creating and Switching to a New Branch
git checkout -b <branch_name>

### Merging Branches
git checkout <branch_name_to_merge_into>
git merge <branch_name_to_merge_from>

### Deleting a Branch
git branch -d <branch_name>

## Remote Repositories
### Adding a Remote Repository
git remote add origin <repository_url>

### Fetching Changes from Remote
git fetch origin

### Pushing Changes to Remote
git push origin <branch_name>

### Pulling Changes from Remote
git pull origin <branch_name>

## Handling Conflicts
### Checking for Conflicts
git status


## Resolving Conflicts
Open the conflicting files and make necessary edits.
### Add the resolved files:
git add <resolved_file>

### Commit the changes:
git commit -m "Resolved merge conflict"

## Advanced Commands
### Stashing Changes
git stash

### Applying Stashed Changes
git stash apply

### Viewing Stashes
git stash list

### Deleting a Stash
git stash drop <stash_name>

## Conclusion
This documentation serves as a quick reference for Git commands used in Git Bash, Windows Command Prompt, and Linux Terminal. For more detailed information, refer to the official Git documentation.

