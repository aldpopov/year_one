# ����� �� ������������ ������ �1
## �� ����� "��������������� �����������"

������� ������ �8�-108�-23 ����� ��������� ����������

������ ���������

�������������: ���. 806 ����������� ������ ���������

1. **����**: �������� Git, Github, Gitlab etc
2. **���� ������**: �������� ����������� Git 
3. **�������:** ������� ����������� �� Github � ��������� ������ ��� ������ ������������ ������
4. **����, �����, �������� ������� ������**: ��������� github � git bash, ������� �����������, ����� ��� �� � ��������� ����� ��� ������ � ��������, ����� ���� ���������� ������� �����. ������ MarkDown, ��������� ����� � ���������.
5. **�������� ���������� ������**: ����������� �� Github, �������� ������� �����������, ���������� ����� ��� ��1 � �����������, �������� ����� ����� � ������ ��� ������, ������� �����, ��������� ������ � ��������� � MarkDown.
6. **��������**:
Sanua@Sanua-PC MINGW64 /
$ git clone https://github.com/aldpopov/year_one.git
Cloning into 'year_one'...
remote: Enumerating objects: 3, done.
remote: Counting objects: 100% (3/3), done.
remote: Total 3 (delta 0), reused 0 (delta 0), pack-reused 0
Receiving objects: 100% (3/3), done.

Sanua@Sanua-PC MINGW64 /
$ git status
fatal: not a git repository (or any of the parent directories): .git

Sanua@Sanua-PC MINGW64 /
$ cd year_one

Sanua@Sanua-PC MINGW64 /year_one (main)
$ git status
On branch main
Your branch is up to date with 'origin/main'.

nothing to commit, working tree clean

Sanua@Sanua-PC MINGW64 /year_one (main)
$ git status
On branch main
Your branch is up to date with 'origin/main'.

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        LW_1/

nothing added to commit but untracked files present (use "git add" to track)

Sanua@Sanua-PC MINGW64 /year_one (main)
$ git add LW_1

Sanua@Sanua-PC MINGW64 /year_one (main)
$ git status
On branch main
Your branch is up to date with 'origin/main'.

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        new file:   LW_1/First_try.txt


Sanua@Sanua-PC MINGW64 /year_one (main)
$ git commit
hint: Waiting for your editor to close the file... unix2dos: converting file D:/Git/year_one/.git/COMMIT_EDITMSG to DOS format...
dos2unix: converting file D:/Git/year_one/.git/COMMIT_EDITMSG to Unix format...
[main bfa44cc] 17.09
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 LW_1/First_try.txt

Sanua@Sanua-PC MINGW64 /year_one (main)
$ git push origin main
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 4 threads
Compressing objects: 100% (2/2), done.
Writing objects: 100% (4/4), 319 bytes | 319.00 KiB/s, done.
Total 4 (delta 0), reused 0 (delta 0), pack-reused 0
To https://github.com/aldpopov/year_one.git
   e14fca1..bfa44cc  main -> main

Sanua@Sanua-PC MINGW64 /year_one (main)
$ git branch task

Sanua@Sanua-PC MINGW64 /year_one (main)
$ git branch
* main
  task

Sanua@Sanua-PC MINGW64 /year_one (main)
$ git checkout task
Switched to branch 'task'

Sanua@Sanua-PC MINGW64 /year_one (task)
$ cd LW_1

Sanua@Sanua-PC MINGW64 /year_one/LW_1 (task)
$ git add Report.md

Sanua@Sanua-PC MINGW64 /year_one/LW_1 (task)
$ git commit -m "Now with report."
[task 000de2e] Now with report.
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 LW_1/Report.md

Sanua@Sanua-PC MINGW64 /year_one/LW_1 (task)
$ git checkout main
Switched to branch 'main'
Your branch is up to date with 'origin/main'.

Sanua@Sanua-PC MINGW64 /year_one/LW_1 (main)
$ git checkout task
Switched to branch 'task'

Sanua@Sanua-PC MINGW64 /year_one/LW_1 (task)
$ git merge task
Already up to date.

Sanua@Sanua-PC MINGW64 /year_one/LW_1 (task)
$ git checkout main
error: Your local changes to the following files would be overwritten by checkout:
        LW_1/Report.md
Please commit your changes or stash them before you switch branches.
Aborting

Sanua@Sanua-PC MINGW64 /year_one/LW_1 (task)
$ git checkout main
error: Your local changes to the following files would be overwritten by checkout:
        LW_1/Report.md
Please commit your changes or stash them before you switch branches.
Aborting

Sanua@Sanua-PC MINGW64 /year_one/LW_1 (task)
$ git commit
On branch task
Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   Report.md

no changes added to commit (use "git add" and/or "git commit -a")

Sanua@Sanua-PC MINGW64 /year_one/LW_1 (task)
$ git add Report.md

Sanua@Sanua-PC MINGW64 /year_one/LW_1 (task)
$ git commit
hint: Waiting for your editor to close the file... unix2dos: converting file D:/Git/year_one/.git/COMMIT_EDITMSG to DOS format...
dos2unix: converting file D:/Git/year_one/.git/COMMIT_EDITMSG to Unix format...
[task a746fda] Report is now written
 1 file changed, 15 insertions(+)

Sanua@Sanua-PC MINGW64 /year_one/LW_1 (task)
$ git checkout main
Switched to branch 'main'
Your branch is up to date with 'origin/main'.

Sanua@Sanua-PC MINGW64 /year_one/LW_1 (main)
$ git merge task
Updating bfa44cc..a746fda
Fast-forward
 LW_1/Report.md | 15 +++++++++++++++
 1 file changed, 15 insertions(+)
 create mode 100644 LW_1/Report.md

7. **��������� ������** �� �������� ������: �����������
8. **������**: ��� ������ ���������� ���������� git, ������� ������� ��� ������ � ���, ������������� � ������� �� Github. ��������� ������ � ������� � ���������, ������������������ � MarkDown. ���������� ������ ���������� ��� ������ � IT ��� ���������� ������������ � ��������� � ������ �����������, � ����� ��� �������� �������� �� ����������� � ����.
