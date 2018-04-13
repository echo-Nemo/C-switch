对于很大的数用  类型说明符用 long
long int a;
scanf(" %ld",&a);

输入格式
1 2 3
2 3 4
2147483647 0 2147483646
0 -2147483648 -2147483647
输出格式
Case #1: false
Case #2: true
Case #3: true
Case #4: false
这种格式要求 可以写个函数 来完成这种格式的输出
int Compare(long int A, long int B, long int C)
{
	int r;
   r = (A + B > C) ? 1 : 0; //学会 ? : 的运算
	return r;
}

for (i = 0; i < n; i++)
	{
		if (K[i] == 1)
			printf("Case #%d: true\n", i + 1);
		else
			printf("Case #%d: false\n", i + 1);
	}

