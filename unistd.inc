; Copyright (C) 1991-2014 Free Software Foundation, Inc.
; This file is part of the GNU C Library.
;
; The GNU C Library is free software; you can redistribute it and/or
; modify it under the terms of the GNU Lesser General Public
; License as published by the Free Software Foundation; either
; version 2.1 of the License, or (at your option) any later version.
;
; The GNU C Library is distributed in the hope that it will be useful,
; but WITHOUT ANY WARRANTY; without even the implied warranty of
; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
; Lesser General Public License for more details.
;
; You should have received a copy of the GNU Lesser General Public
; License along with the GNU C Library; if not, see
; <http://www.gnu.org/licenses/>.

%ifndef	_UNISTD_H
%define	_UNISTD_H	1

%define	STDIN_FILENO	0	; Standard input.  
%define	STDOUT_FILENO	1	; Standard output.  
%define	STDERR_FILENO	2	; Standard error output.  

%define	R_OK	4		; Test for read permission.  
%define	W_OK	2		; Test for write permission.  
%define	X_OK	1		; Test for execute permission.  
%define	F_OK	0		; Test for existence.  

extern access
extern euidaccess
extern eaccess
extern faccessat

%define SEEK_SET	0	 ; Seek from beginning of file.  
%define SEEK_CUR	1	 ; Seek from current position.  
%define SEEK_END	2	 ; Seek from end of file.  
%define SEEK_DATA	3	 ; Seek to next data.  
%define SEEK_HOLE	4	 ; Seek to next hole.  

extern lseek
extern lseek64
extern close
extern read
extern write
extern pread
extern pwrite
extern __REDIRECT
extern pread64
extern pwrite64
extern pipe
extern pipe2
extern alarm
extern sleep
extern ualarm
extern usleep
extern pause
extern chown
extern fchown
extern lchown
extern fchownat
extern chdir
extern fchdir
extern getcwd
extern get_current_dir_name
extern getwd
extern dup
extern dup2
extern dup3
extern __environ
extern environ
extern execve
extern fexecve
extern execv
extern execle
extern execl
extern execvp
extern execlp
extern execvpe
extern nice
extern _exit
extern pathconf
extern fpathconf
extern sysconf
extern confstr
extern getpid
extern getppid
extern getpgrp
extern __getpgid
extern getpgid
extern setpgid
extern setpgrp
extern setsid
extern getsid
extern getuid
extern geteuid
extern getgid
extern getegid
extern getgroups
extern group_member
extern setuid
extern setreuid
extern seteuid
extern setgid
extern setregid
extern setegid
extern getresuid
extern getresgid
extern setresuid
extern setresgid
extern fork
extern vfork
extern ttyname
extern ttyname_r
extern isatty
extern ttyslot
extern link
extern linkat
extern symlink
extern readlink
extern symlinkat
extern readlinkat
extern unlink
extern unlinkat
extern rmdir
extern tcgetpgrp
extern tcsetpgrp
extern getlogin
extern getlogin_r
extern setlogin
extern gethostname
extern sethostname
extern sethostid
extern getdomainname
extern setdomainname
extern vhangup
extern revoke
extern profil
extern acct
extern getusershell
extern endusershell
extern setusershell
extern daemon
extern chroot
extern getpass
extern fsync
extern syncfs
extern gethostid
extern sync
extern getpagesize
extern getdtablesize
extern truncate
extern __REDIRECT_NTH
extern truncate64
extern ftruncate
extern ftruncate64
extern brk
extern sbrk
extern syscall

%define F_ULOCK 0	; Unlock a previously locked region.
%define F_LOCK  1	; Lock a region for exclusive use.
%define F_TLOCK 2	; Test and lock a region for exclusive use.
%define F_TEST  3	; Test a region for other processes locks.

extern lockf
extern __REDIRECT
extern lockf64
extern fdatasync
extern crypt
extern encrypt
extern swab
extern ctermid

%endif
; vim:ft=nasm
