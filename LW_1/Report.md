# Отчёт по лабораторной работе №1
## по курсу "Фундаментальная информатика"

Студент группы М8О-108Б-23 Попов Александр Дмитриевич

Работа выполнена

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: изучение Git, Github, Gitlab etc
2. **Цель работы**: Изучение функционала Git 
3. **Задание:** Завести репозиторий на Github с отдельной папкой для каждой лабораторной работы
4. **Идея, метод, алгоритм решения задачи**: Используя github и git bash, создать репозиторий, папку для ЛР и отдельную ветку для работы с заданием, после чего произвести слияние веток. Изучив MarkDown, составить отчёт с листингом.
5. **Сценарий выполнения работы**: Регистрация на Github, создание первого репозитория, добавление папки для ЛР1 в репозитории, создание новой ветки с файлом для отчёта, слияние веток, написание отчёта с листингом в MarkDown.
6. **Протокол**:
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

Sanua@Sanua-PC MINGW64 /year_one/LW_1 (main)
$ git status
On branch main
Your branch is ahead of 'origin/main' by 2 commits.
  (use "git push" to publish your local commits)

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   Report.md

no changes added to commit (use "git add" and/or "git commit -a")

Sanua@Sanua-PC MINGW64 /year_one/LW_1 (main)
$ git add Report.md

Sanua@Sanua-PC MINGW64 /year_one/LW_1 (main)
$ gir commit
bash: gir: command not found

Sanua@Sanua-PC MINGW64 /year_one/LW_1 (main)
$ git commit
hint: Waiting for your editor to close the file... unix2dos: converting file D:/Git/year_one/.git/COMMIT_EDITMSG to DOS format...
dos2unix: converting file D:/Git/year_one/.git/COMMIT_EDITMSG to Unix format...
[main 6d49009] The last update
 1 file changed, 155 insertions(+), 4 deletions(-)

Sanua@Sanua-PC MINGW64 /year_one/LW_1 (main)
$ git push origin main
Enumerating objects: 13, done.
Counting objects: 100% (13/13), done.
Delta compression using up to 4 threads
Compressing objects: 100% (11/11), done.
Writing objects: 100% (11/11), 2.91 KiB | 1.45 MiB/s, done.
Total 11 (delta 1), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), done.
To https://github.com/aldpopov/year_one.git
   bfa44cc..6d49009  main -> main

7. **Замечания автора** по существу работы: отсутствуют
8. **Выводы**: Был освоен простейший функционал git, изучены команды для работы с ним, репозиториями и ветками на Github. Проведена работа с отчётом и листингом, отформатированными в MarkDown. Полученные знания пригодятся при работе в IT для комфортной коммуникации с коллегами и обмена информацией, а также для удобного слежения за изменениями в коде.
