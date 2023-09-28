# Отчёт по лабораторной работе №2
## по курсу "Фундаментальная информатика"

Студент группы М8О-108Б-23 Попов Александр Дмитриевич

Работа выполнена

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: изучение bash, linux terminal
2. **Цель работы**: Изучение функционала bash, использование простейших команд и удалённой машины.
3. **Задание:** Опробовать базовые команды bash в терминале, потренироваться в работе с удалённой машиной.
4. **Идея, метод, алгоритм решения задачи**: Проверить все необходимые команды bash в терминале, при помощи логина и пароля получить доступ к удалённой машине, переместить листинг на удалённую машину.
5. **Сценарий выполнения работы**: Ввести и проверить работу команд bash, сохранив их вывод в листинг; попасть на удалённую машину, воспользовавшись логином и паролем; заархивировать листинг и отправить на удалённую машину; распаковать содержимое архива и снова скачать его к себе на устройство; составить отчёт в формате Markdown и выложить на Github с применением слияния веток;
6. **Протокол**:
```
{
aldpopov@Ubuntu:~/year_one$ mkdir LW_2
aldpopov@Ubuntu:~/year_one$ cd LW_2
aldpopov@Ubuntu:~/year_one/LW_2$ touch listing
aldpopov@Ubuntu:~/year_one/LW_2$ who
aldpopov tty2         2023-09-27 22:32 (tty2)
aldpopov@Ubuntu:~/year_one/LW_2$ pwd
/home/aldpopov/year_one/LW_2
aldpopov@Ubuntu:~/year_one/LW_2$ ls
listing
aldpopov@Ubuntu:~/year_one/LW_2$ ls -la
total 8
drwxrwxr-x 2 aldpopov aldpopov 4096 сен 27 22:49 .
drwxrwxr-x 5 aldpopov aldpopov 4096 сен 27 22:49 ..
-rw-rw-r-- 1 aldpopov aldpopov    0 сен 27 22:49 listing
aldpopov@Ubuntu:~/year_one/LW_2$ cd
aldpopov@Ubuntu:~$ cd year_one
aldpopov@Ubuntu:~/year_one$ cd .
aldpopov@Ubuntu:~/year_one$ cd ..
aldpopov@Ubuntu:~$ cd year_one
aldpopov@Ubuntu:~/year_one$ cd LW_2
aldpopov@Ubuntu:~/year_one/LW_2$ cd ..
aldpopov@Ubuntu:~/year_one$ cp README.md LW_2
aldpopov@Ubuntu:~/year_one$ cd LW_2
aldpopov@Ubuntu:~/year_one/LW_2$ ls -la
total 12
drwxrwxr-x 2 aldpopov aldpopov 4096 сен 27 22:51 .
drwxrwxr-x 5 aldpopov aldpopov 4096 сен 27 22:49 ..
-rw-rw-r-- 1 aldpopov aldpopov    0 сен 27 22:49 listing
-rw-rw-r-- 1 aldpopov aldpopov   10 сен 27 22:51 README.md
aldpopov@Ubuntu:~/year_one/LW_2$ mv README.md year_one
aldpopov@Ubuntu:~/year_one/LW_2$ rm year_one
aldpopov@Ubuntu:~/year_one/LW_2$ touch test
aldpopov@Ubuntu:~/year_one/LW_2$ nano
aldpopov@Ubuntu:~/year_one/LW_2$ nano test
aldpopov@Ubuntu:~/year_one/LW_2$ cat test
12345
aldpopov@Ubuntu:~/year_one/LW_2$ rm test
aldpopov@Ubuntu:~/year_one/LW_2$ ps
    PID TTY          TIME CMD
   5463 pts/0    00:00:00 bash
   5601 pts/0    00:00:00 ps
aldpopov@Ubuntu:~/year_one/LW_2$ touch test_2
aldpopov@Ubuntu:~/year_one/LW_2$ nano test_2
aldpopov@Ubuntu:~/year_one/LW_2$ tail test_2
34
65
12
543
65
67
78
78
9089
43
aldpopov@Ubuntu:~/year_one/LW_2$ head test_2
12333333333333333333
32222222
324
324
534
354
34
345
34
34
aldpopov@Ubuntu:~/year_one/LW_2$ grep 324 test_2
324
324
aldpopov@Ubuntu:~/year_one/LW_2$ grep 345 test_2
345
aldpopov@Ubuntu:~/year_one/LW_2$ history
    1  who
    2  pwd
    3  git
    4  apt-get install git
    5  sudo apt-get install git
    6  df -h
    7  DISPLAY=:0
    8  su
    9  python3 --version
   10  sudo nano /usr/bin/gnome-terminal
   11  sudo adduser aldpopov sudo
   12  su
   13  sudo nano /usr/bin/gnome-terminal
   14  sudo
   15  sudo nano /usr/bin/gnome-terminal
   16  exit
   17  sudo
   18  sudo nano /usr/bin/gnome-terminal
   19  clear
   20  sudo apt remove gnome-terminal
   21  clear
   22  sudo apt install gnome-terminal
   23  ls -la
   24  git status
   25  git clone https://github.com//aldpopov/year_one.git
   26  git log
   27  cd year_one
   28  git log
   29  cd year_one
   30  git remote add origin https://github.com/aldpopov/year_one.git
   31  clear
   32  mkdir LW_2
   33  cd LW_2
   34  touch listing.txt
   35  who
   36  pwd
   37  ls
   38  ls -la
   39  cd
   40  cd year_one
   41  cd LW_2
   42  cp man
   43  cp listing.txt year_one
   44  rm year_one
   45  cp listing
   46  cp listing.txt year_one
   47  cat year_one
   48  rm year_one
   49  cd year_one
   50  cd
   51  cd year_one
   52  cd LW_2
   53  cd --help
   54  cd .
   55  cd ..
   56  cp README.md LW_2
   57  cd LW_2
   58  rm README.md
   59  clear
   60  rm listing.txt
   61  cd .
   62  cd ..
   63  rmdir LW_2
   64  clear
   65  mkdir LW_2
   66  cd LW_2
   67  touch listing
   68  who
   69  pwd
   70  ls
   71  ls -la
   72  cd
   73  cd year_one
   74  cd .
   75  cd ..
   76  cd year_one
   77  cd LW_2
   78  cd ..
   79  cp README.md LW_2
   80  cd LW_2
   81  ls -la
   82  mv README.md year_one
   83  rm year_one
   84  touch test
   85  nano
   86  nano test
   87  cat test
   88  rm test
   89  ps
   90  touch test_2
   91  nano test_2
   92  tail test_2
   93  head test_2
   94  grep 324 test_2
   95  grep 345 test_2
   96  history
aldpopov@Ubuntu:~/year_one/LW_2$ mkdir Test_dir
aldpopov@Ubuntu:~/year_one/LW_2$ rmdir Test_dir
aldpopov@Ubuntu:~/year_one/LW_2$ sudo
usage: sudo -h | -K | -k | -V
usage: sudo -v [-ABknS] [-g group] [-h host] [-p prompt] [-u user]
usage: sudo -l [-ABknS] [-g group] [-h host] [-p prompt] [-U user] [-u user]
            [command]
usage: sudo [-ABbEHknPS] [-r role] [-t type] [-C num] [-D directory] [-g group]
            [-h host] [-p prompt] [-R directory] [-T timeout] [-u user]
            [VAR=value] [-i|-s] [<command>]
usage: sudo -e [-ABknS] [-r role] [-t type] [-C num] [-D directory] [-g group]
            [-h host] [-p prompt] [-R directory] [-T timeout] [-u user] file ...
aldpopov@Ubuntu:~/year_one/LW_2$ sudo ps
[sudo] password for aldpopov: 
    PID TTY          TIME CMD
   5617 pts/1    00:00:00 sudo
   5618 pts/1    00:00:00 ps
aldpopov@Ubuntu:~/year_one/LW_2$ sudo who
aldpopov tty2         2023-09-27 22:32 (tty2)
aldpopov pts/1        2023-09-27 22:56
aldpopov@Ubuntu:~/year_one/LW_2$ echo I'm tired, boss...
> ^C
aldpopov@Ubuntu:~/year_one/LW_2$ echo I'm fine
> ^C
aldpopov@Ubuntu:~/year_one/LW_2$ echo fine
fine
aldpopov@Ubuntu:~/year_one/LW_2$ ssh a_popov@185.5.249.140
The authenticity of host '185.5.249.140 (185.5.249.140)' can't be established.
ED25519 key fingerprint is SHA256:gMWpghci4jH+8KckY83J+zLNE4DrwfrDZorZZU2IRGI.
This key is not known by any other names
Are you sure you want to continue connecting (yes/no/[fingerprint])? yes
Warning: Permanently added '185.5.249.140' (ED25519) to the list of known hosts.
a_popov@185.5.249.140's password: 
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Mon Sep 25 11:05:27 2023 from 185.215.176.92
a_popov@vds2476450:~$ ls
net
a_popov@vds2476450:~$ cd net
a_popov@vds2476450:~/net$ ls
arch.tar  listing.txt
a_popov@vds2476450:~/net$ cd
a_popov@vds2476450:~$ mkdir second_try
a_popov@vds2476450:~$ ls
net  second_try
a_popov@vds2476450:~$ touch trash
a_popov@vds2476450:~$ ls
net  second_try  trash
a_popov@vds2476450:~$ pwd
/home/a_popov
a_popov@vds2476450:~$ logout
Connection to 185.5.249.140 closed.
aldpopov@Ubuntu:~$ scp a_popov@185.5.249.140:/home/a_popov/trash trash
a_popov@185.5.249.140's password: 
trash                                         100%    0     0.0KB/s   00:00    
aldpopov@Ubuntu:~$ rm trash
aldpopov@Ubuntu:~$ scp -r a_popov@185.5.249.140:/home/a_popov/second_try second_try
a_popov@185.5.249.140's password: 
aldpopov@Ubuntu:~$ ls
Desktop    Downloads  Pictures  second_try  Templates  year_one
Documents  Music      Public    snap        Videos
aldpopov@Ubuntu:~$ rm second_try
rm: cannot remove 'second_try': Is a directory
aldpopov@Ubuntu:~$ rmdir second_try
aldpopov@Ubuntu:~$ ssh-keygen -t rsa
Generating public/private rsa key pair.
Enter file in which to save the key (/home/aldpopov/.ssh/id_rsa): 
Enter passphrase (empty for no passphrase): 
Enter same passphrase again: 
Your identification has been saved in /home/aldpopov/.ssh/id_rsa
Your public key has been saved in /home/aldpopov/.ssh/id_rsa.pub
The key fingerprint is:
SHA256:63my31EXiJR1iCmtGOYKj36pKtTL4u8ro/XQPrdHWtA aldpopov@Ubuntu
The key's randomart image is:
+---[RSA 3072]----+
|          ..=... |
|       o ..=..o  |
|      o.o o. . . |
|   .  .oE.      .|
|  . + ..S     . .|
| . + o  o.   . . |
|. = o .+.   .    |
|.= B.oo.o... .   |
|=oB=*o.o+=. .    |
+----[SHA256]-----+
aldpopov@Ubuntu:~/.ssh$ ssh-copy-id -i ~/.ssh/id_rsa.pub a_popov@185.5.249.140
/usr/bin/ssh-copy-id: INFO: Source of key(s) to be installed: "/home/aldpopov/.ssh/id_rsa.pub"
/usr/bin/ssh-copy-id: INFO: attempting to log in with the new key(s), to filter out any that are already installed
/usr/bin/ssh-copy-id: INFO: 1 key(s) remain to be installed -- if you are prompted now it is to install the new keys
a_popov@185.5.249.140's password: 

Number of key(s) added: 1

Now try logging into the machine, with:   "ssh 'a_popov@185.5.249.140'"
and check to make sure that only the key(s) you wanted were added.

aldpopov@Ubuntu:~/.ssh$ ssh a_popov@185.5.249.140
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.
aldpopov@Ubuntu:~/.ssh$ cd
aldpopov@Ubuntu:~$ cd year_one
aldpopov@Ubuntu:~/year_one$ cd LW_2
aldpopov@Ubuntu:~/year_one/LW_2$ tar cvf listing
tar: Cowardly refusing to create an empty archive
Try 'tar --help' or 'tar --usage' for more information.
aldpopov@Ubuntu:~/year_one/LW_2$ tar cvf arch listing
listing
aldpopov@Ubuntu:~/year_one/LW_2$ scp ~/year_one/LW_2/arch a_popov@185.5.249.140:/home/a_popov/second_try
arch                                                         100%   10KB 933.1KB/s   00:00    
aldpopov@Ubuntu:~/year_one/LW_2$ ssh a_popov@185.5.249.140
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Thu Sep 28 01:13:59 2023 from 46.138.40.109
a_popov@vds2476450:~$ ls
net  second_try  trash
a_popov@vds2476450:~$ cd second_try
a_popov@vds2476450:~/second_try$ ls
arch
a_popov@vds2476450:~/second_try$ tar xvf arch
listing
a_popov@vds2476450:~/second_try$ ls
arch  listing
a_popov@vds2476450:~/second_try$ logout
Connection to 185.5.249.140 closed.
aldpopov@Ubuntu:~/year_one/LW_2$ scp a_popov@185.5.249.140:/home/a_popov/second_try/listing unpacked_listing
listing                                                      100% 8450   770.9KB/s   00:00    
aldpopov@Ubuntu:~/year_one/LW_2$ ls
arch  listing  test_2  unpacked_listing
Last login: Thu Sep 28 00:42:46 2023 from 46.138.40.109
aldpopov@Ubuntu:~/year_one/LW_2$ git status
On branch main
Your branch is up-to-date with 'origin/main'.

Untracked files:
  (use "git add <file>..." to include in what will be committed)
	./

nothing added to commit but untracked files present (use "git add" to track)
aldpopov@Ubuntu:~/year_one/LW_2$ cd ..
aldpopov@Ubuntu:~/year_one$ git branch task_2
aldpopov@Ubuntu:~/year_one$ git status
On branch main
Your branch is up-to-date with 'origin/main'.

Untracked files:
  (use "git add <file>..." to include in what will be committed)
	LW_2/

nothing added to commit but untracked files present (use "git add" to track)
aldpopov@Ubuntu:~/year_one$ git touch task_2
git: 'touch' is not a git command. See 'git --help'.
aldpopov@Ubuntu:~/year_one$ git checkoout task_2
git: 'checkoout' is not a git command. See 'git --help'.

The most similar command is
	checkout
aldpopov@Ubuntu:~/year_one$ git checkout task_2
Switched to branch 'task_2'
aldpopov@Ubuntu:~/year_one$ git add LW_2
aldpopov@Ubuntu:~/year_one$ git status
On branch task_2
Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
	new file:   LW_2/arch
	new file:   LW_2/listing
	new file:   LW_2/test_2
	new file:   LW_2/unpacked_listing

aldpopov@Ubuntu:~/year_one$ cd LW_2
aldpopov@Ubuntu:~/year_one/LW_2$ touch Report_2.md
aldpopov@Ubuntu:~/year_one/LW_2$ ls
arch  listing  Report_2.md  test_2  unpacked_listing
aldpopov@Ubuntu:~/year_one/LW_2$ git checkout main
A	LW_2/arch
A	LW_2/listing
A	LW_2/test_2
A	LW_2/unpacked_listing
Switched to branch 'main'
Your branch is up-to-date with 'origin/main'.
aldpopov@Ubuntu:~/year_one/LW_2$ git checkout task_2
A	LW_2/arch
A	LW_2/listing
A	LW_2/test_2
A	LW_2/unpacked_listing
Switched to branch 'task_2'
aldpopov@Ubuntu:~/year_one/LW_2$ git push origin task_2
Username for 'https://github.com': aldpopov
Password for 'https://aldpopov@github.com': 
remote: Support for password authentication was removed on August 13, 2021.
remote: Please see https://docs.github.com/en/get-started/getting-started-with-git/about-remote-repositories#cloning-with-https-urls for information on currently recommended modes of authentication.
fatal: Authentication failed for 'https://github.com//aldpopov/year_one.git/'
aldpopov@Ubuntu:~/year_one/LW_2$ git push origin task_2
Username for 'https://github.com': aldpopov
Password for 'https://aldpopov@github.com': 
Total 0 (delta 0), reused 0 (delta 0), pack-reused 0
remote: 
remote: Create a pull request for 'task_2' on GitHub by visiting:
remote:      https://github.com/aldpopov/year_one/pull/new/task_2
remote: 
To https://github.com//aldpopov/year_one.git
 * [new branch]      task_2 -> task_2
aldpopov@Ubuntu:~/year_one/LW_2$ git commit
[task_2 c1399ec] LW_2 is now available!
 Committer: aldpopov <aldpopov@Ubuntu.myguest.virtualbox.org>
Your name and e-mail address were configured automatically based
on your username and hostname. Please check that they are accurate.
You can suppress this message by setting them explicitly. Run the
following command and follow the instructions in your editor to edit
your configuration file:

    git config --global --edit

After doing this, you may fix the identity used for this commit with:

    git commit --amend --reset-author

 4 files changed, 616 insertions(+)
 create mode 100644 LW_2/arch
 create mode 100644 LW_2/listing
 create mode 100644 LW_2/test_2
 create mode 100644 LW_2/unpacked_listing
aldpopov@Ubuntu:~/year_one/LW_2$ git push origin task_2
Username for 'https://github.com': aldpopov
Password for 'https://aldpopov@github.com': 
Enumerating objects: 8, done.
Counting objects: 100% (8/8), done.
Delta compression using up to 4 threads
Compressing objects: 100% (7/7), done.
Writing objects: 100% (7/7), 3.37 KiB | 690.00 KiB/s, done.
Total 7 (delta 2), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (2/2), done.
To https://github.com//aldpopov/year_one.git
   5cd19dd..c1399ec  task_2 -> task_2
aldpopov@Ubuntu:~/year_one/LW_2$ git add Report_2.md
aldpopov@Ubuntu:~/year_one/LW_2$ git status
On branch task_2
Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
	new file:   Report_2.md

aldpopov@Ubuntu:~/year_one/LW_2$ git commit
[task_2 cf610a7] Blank Report_2
 Committer: aldpopov <aldpopov@Ubuntu.myguest.virtualbox.org>
Your name and e-mail address were configured automatically based
on your username and hostname. Please check that they are accurate.
You can suppress this message by setting them explicitly. Run the
following command and follow the instructions in your editor to edit
your configuration file:

    git config --global --edit

After doing this, you may fix the identity used for this commit with:

    git commit --amend --reset-author

 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 LW_2/Report_2.md
aldpopov@Ubuntu:~/year_one/LW_2$ git push origin task_2
Username for 'https://github.com': aldpopov
Password for 'https://aldpopov@github.com': 
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 4 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (4/4), 394 bytes | 131.00 KiB/s, done.
Total 4 (delta 1), reused 1 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com//aldpopov/year_one.git
   c1399ec..cf610a7  task_2 -> task_2
aldpopov@Ubuntu:~/year_one/LW_2$ 
}
```
7. **Замечания автора** по существу работы: RSA ключ долгое время может не функционировать должным образом даже при правильном использовании команды ssh-copy-id; решением может послужить либо изменение параметров папки .ssh на удалённой машине, либо добавление после ssh-keygen флага -t rsa, дополнительно указывающего тип генерируемого ключа.
8. **Выводы**: Был освоен простейший функционал bash, изучены команды для архивирования данных и другой работы с терминалом, а также было отработано взаимодействие с удалённой машиной. Всё это пригодится при работе на системах UNIX и при обмене информацией с коллегами при помощи удалённых машин.
