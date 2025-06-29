#include <stdio.h>
#include <string.h>

int main() {
	char s[1000], part[1000];
	int tam_s, tam_part, i, j;

	while (scanf("%s", s) != EOF) {
		scanf("%s", part);
		tam_s = strlen(s);
		tam_part = strlen(part);
		for (i = 0; i <= tam_s - tam_part; i++) {
			for (j = 0; j < tam_part; j++) {
				if (s[i + j] != part[j]) {
					break;
				}
			}
			if (j == tam_part) {
				for (int k = i; k < tam_s - tam_part; k++) {
					s[k] = s[k + tam_part];
				}
				s[tam_s - tam_part] = '\0';
				tam_s -= tam_part;
				i -= 2;
			}
		}
		if (strlen(s) > 0) {
			printf("%s\n", s);
		} else {
			printf("null value\n");
		}
	}

	return 0;
}

