#include	<stdio.h>
				struct	book{								int	no;								char	name;								};
int	main	() {				struct	book	myBook;				myBook.no	=	3;				myBook.name	=	'C';
				printf(	"Book	No	:	%d\n",	myBook.no);				printf(	"Book	Name	:	%c\n",	myBook.name);
				return	0; }
