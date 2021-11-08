# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 18:54:21 by mahadad           #+#    #+#              #
#    Updated: 2021/11/08 18:54:32 by mahadad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

str=$(pwd)
if [[ $1 = "clear" ]]
	then
		read -p "clear on ${str} [y/N] ? " resp
	if [[ $resp = 'y' ]]
		then
			rm *.a; rm *.c; rm *.h
			exit 0
		else
			exit 0
	fi
fi

if [[ $1 = "make" ]]
	then
		make -C ../
fi

cp -fv ../libft.a .;
cp -fv ../includes/* .;

while true
do read -p "Erase/Create main.c [y/N] ? " resp
	if [[ $resp = 'y' ]]
		then
			printf "#include \"libft.h\"\n#include <stdio.h>\n\nint	main()\n{\n\n}\n" > main.c
			exit 0
		else
			exit 0
	fi
done
exit 1