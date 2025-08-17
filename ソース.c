#include <stdio.h>

void Q001(void) {
	//[Warmup] Print numbers 1..10 (one line).
	for (int i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
}

void Q002(void) {
	//[Warmup] Print numbers 10..1 (countdown).
	for (int i = 10; i >= 1; i--)
	{
		printf("%d ", i);
	}
	printf("\n");
}

void Q003(void) {
	//[Warmup] Print even numbers 2..20.
	for (int i = 2; i <= 20; i += 2)
	{
		printf("%d ", i);
	}
	printf("\n");
}

void Q004(void) {
	//[Warmup] Print odd numbers 1..19.
	for (int i = 1; i < 20; i += 2)
	{
		printf("%d ", i);
	}
	printf("\n");
}

void Q005(void) {
	//[Warmup] Print multiples of 3 up to 30.
	for (int i = 3; i <= 30; i += 3)
	{
		printf("%d ", i);
	}
}

void Q006(void) {
	//[Warmup] Print squares 1^2..10^2.
	for (int i = 1; i <= 10; i++)
	{
		printf("%d ", i * i);
	}
	printf("\n");
}

void Q007(void) {
	//[Warmup] Print 5x5 star block.
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void Q008(void) {
	//[Warmup] Print right triangle of stars height=5.
	for (int r = 1; r <= 5; r++) {
		for (int c = 0; c < r; c++)
			putchar('*');
		puts("");
	}

}

void Q009(void) {
	//[Warmup] Print multiplication table row for n (1..9).
	for (int i = 1; i <= 10; i++){
		for (int j = 1; j <= 10; j++) {
			printf("%3d ", i * j);
		}
		printf("\n");
	}
}

void Q010(void) {
	//[Warmup] Read int x then print it.
	int x = 0;
	printf("Enter an integer: ");
	scanf_s("%d", &x);
	printf("You entered: %d\n", x);

}


int main(void) {
	Q001();

	Q002();

	Q003();

	Q004();

	Q005();

	Q006();

	Q007();

	Q008();

	Q009();

	Q010();


	return 0;
}