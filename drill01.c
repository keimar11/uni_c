//	NAME
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void	FuncA(void){
	printf("Copyright (c) 2024 WASEDA TARO\n");
	printf("累乗を計算します\n");
}

double	FuncB(void){
	double	x;

	printf("実数を入力してください: ");
	scanf("%lf", &x);
	return (x);
}

void	FuncC(int k, double x){
	printf("%d 乗された値は %f です\n", k, x);
}

void	FuncD(double x, int k){
	int	i;
	double	y;

	i = 0;
	y = 1;
	FuncC(i, y);
	if (k == 0) exit;
	else if (k > 0){
		for(++i; i<=k; i++){
			y *= x;
			FuncC(i, y);
		}
	}else{
		for(--i; i>=k; i--){
			y /= x;
			FuncC(i, y);
		}
	}
}

int	main(void){
	double	x;
	int		k;


	FuncA();
	x = FuncB();
	k = 0;
	FuncD(x, k);
	return (0);
}

// 0~k乗を想定。













