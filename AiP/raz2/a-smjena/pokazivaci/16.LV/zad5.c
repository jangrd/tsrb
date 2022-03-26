#include <stdio.h>

int main()
{
	char a[5];
	char *p_a = &a[0];
	int i, v_count = 0, m_count = 0;
	for (i = 0; i < 5; i++) {
		printf("Upisi %d. slovo u niz: ", i+1);
		scanf(" %c", p_a + i);
	}
	for (i = 0; i < 5; i++) {
		if (*(p_a + i) >= 'A' && *(p_a + i) <= 'Z') {
			v_count++;
		} else if (*(p_a + i) >= 'a' && *(p_a + i) <= 'z') {
			m_count++;
		}
	}
	if (v_count > m_count) {
		printf("Upisano je vise velikih slova\n");
	} else if (m_count > v_count) {
		printf("Upisano je vise malih slova\n");
	} else {
		printf("Upisano je jednako velikih i malih slova\n");
	}
	return 0;
}
