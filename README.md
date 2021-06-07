# Shell Variant
UNIX Shell Variant - A basic unix shell with some new additional features.

It aims at developing a very unix shell which allows user to run a all basic unix 
commands. The code for the commands is also explicitly coded, where we take use of system
calls to interact with the kernel. The programming language used is C++, which is considered
best to use for working upon core related projects as it is quite efficient and fast and comes with
a whole lot of utilities.

The purpose of a shell is to take from user a command, interpret it, and make
the operating system to do the corresponding job if the command is valid, otherwise log out the
error. The shell itself does not get employed to perform the corresponding job, it just interpret
what service the user is asking for, and make the corresponding executable to run. It waits
for the executable to finish, and resume its functioning (i.e taking commands from the user)
after the job has been done. Hence, a shell can also be called as command line interpreter. A
shell also allows the user to run executable of there own. A few commands are build-in in the
shell itself, like the change directory command, where we are required to change the directory of
running process, and this has to be done within the context of process only, any other executable
must not be employed for this job.

## Setting up the environment
Our shell can be run using the linux terminal. Here are the necessary steps one should follow
if they want to see it working locally:

1. Clone the code from our github repository using the command:
git clone **https://github.com/hemilpanchiwala/Shell.git**

2. You need to install the libzip library in your system to use the zip and unzip features of
the Shell. For installing libzip, please follow the instructions given here **https://github.com/nih-at/libzip/blob/master/INSTALL.md**.

3. Once installed, you are ready to use complete features of the Shell.

4. For running the Shell from any directory, you need to set its path in the environment
variable $PATH through the .bashrc file. Refer this link for setting the $PATH variable.

5. Now, just run the myshell from any directory and enjoy using our Shell!

## Simulation Results

Please check out the live recording of the UNIX Shell at https://drive.google.com/file/d/1FL9vuSBjzV47zD9HZnfUyVB824laBG_t/view?usp=sharing.
