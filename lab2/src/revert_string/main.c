#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "revert_string.h"

int main(int argc, char *argv[])
//int argc - кол-во аргументов
//char *argv[] - ссылка на входные строки
{
    // проверяем, что входных аргумента два: название программы и входная строка, которую нужно перевернуть
	if (argc != 2)
	{
		printf("Usage: %s string_to_revert\n", argv[0]);
		return -1;
	}
    // выделяем в куче память и записываем туда входную строку
	char *reverted_str = malloc(sizeof(char) * (strlen(argv[1]) + 1));
	strcpy(reverted_str, argv[1]);

	RevertString(reverted_str);
    //выводим перевернутую строку и очищяем память
	printf("Reverted: %s\n", reverted_str);
	free(reverted_str);
	return 0;
}

