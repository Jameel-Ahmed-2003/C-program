void A(int i,int j,int n)
{
	for(i;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0||j==0||j==n-1||i==n/2)
			printf("* ");
			else
			printf("  ");
		}
		puts("");
	}
}
void C(int i,int j,int n)
{
	for(i;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0||i==n-1||j==0)
			printf("* ");
			else
			printf("  ");
		}
		puts("");
	}
}
void E(int i,int j,int n)
{
	for(;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0||j==0||i==n-1||i==n/2&&j<=n/2)
			printf("* ");
			else
			printf("  ");
		}
		puts("");
	}
}
void F(int i,int j,int n)
{
	for(;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0||j==0||i==n/2&&j<=n/2)
			printf("* ");
			else
			printf("  ");
		}
		puts("");
	}
}
void G(int i,int j,int n)
{
	for(;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0||j==0||i==n-1||j==n-1&&i>=n/2||i==n/2&&j>=n/2)
			printf("* ");
			else
			printf("  ");
		}
		puts("");
	}
}
void H(int i,int j,int n)
{
	for(;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==0||j==n-1||i==n/2)
			printf("* ");
			else
			printf("  ");
		}
		puts("");
	}
}
void I(int i,int j,int n)
{
	for(i;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
            if(i==0||i==n-1)
			printf("* ");
            else if(j==(n+1)/2 &&i!=0)
            printf(" *");
            else
            printf(" ");
		}
		puts("");
	}
}
void J(int i,int j,int n)
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
            if((i==n-1&&j<n/2)||i==0||j==n/2)
            printf("* ");
            else
            printf("  ");
		}
		printf("\n");
	}
}
void M(int i,int j,int n)
{
	for(;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==0||i==j&&i<=(n-1)/2||i+j==n-1&&i<=j||j==n-1)
			printf("* ");
			else
			printf("  ");
		}
		puts("");
	}
}
void N(int i,int j,int n)
{
	for(;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==0||j==n-1||i==j)
			printf("* ");
			else
			printf("  ");
		}
		puts("");
	}
}
void O(int i,int j,int n)
{
	for(;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0||j==0||i==n-1||j==n-1)
			printf("* ");
			else
			printf("  ");
		}
		puts("");
	}
}
void S(int i,int j,int n)
{
	for(;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0||i==n/2||i==n-1||j==0&&i<=n/2||j==n-1&&i>=n/2)
			printf("* ");
			else
			printf("  ");
		}
		puts("");
	}
}
void T(int i,int j,int n)
{
	for(;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0||j==n/2)
			printf("* ");
			else
			printf("  ");
		}
		puts("");
	}
}
void U(int i,int j,int n)
{
	for(;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==n-1||i==n-1||j==0)
			printf("* ");
			else
			printf("  ");
		}
		puts("");
	}
}
void V(int i,int j,int n)
{
	for(;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j&&i<=(n-1)/2||i+j==n-1&&i<=j)
			printf("* ");
			else
			printf("  ");
		}
		puts("");
	}
}
void W(int i,int j,int n)
{
	for(;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==0||j==n-1||i==j&&i>=n/2||i+j==n-1&&i>=j)
			printf("* ");
			else
			printf("  ");
		}
		puts("");
	}
}
void X(int i,int j,int n)
{
	for(;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j||i+j==n-1)
			printf("* ");
			else
			printf("  ");
		}
		puts("");
	}
}
void Y(int i,int j,int n)
{
	for(;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j&&i<=(n-1)/2||i+j==n-1&&i<=j||j==n/2&&i>=n/2)
			printf("* ");
			else
			printf("  ");
		}
		puts("");
	}
}
void Z(int i,int j,int n)
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
            if(i==0||i+j==n-1||i==n-1)
            printf("* ");
            else
            printf("  ");
		}
		puts("");
	}
}
void plus(int i,int j,int n)
{
	for(;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==n/2||j==n/2)
			printf("* ");
			else
			printf("  ");
		}
		puts("");
	}
}
void basic(int i,int j,int n)
{
	for(;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("* ");
		}
		puts("");
	}
}
void rowcol(int i,int j,int n)
{
	for(;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0||j==0||i==n-1||j==n-1||i==n/2||j==n/2)
			printf("* ");
			else
			printf("  ");
		}
		puts("");
	}
}
void rowcol1(int i,int j,int n)
{
	int a=n/2;
		for(;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0||j==0||i==n-1||j==n-1||i==a||j==a||i==a/2||i==(n-a/2))
			printf("* ");
			else
			printf("  ");
		}
		puts("");
	}
}
void rightTriangle(int i,int j,int n)
{
	for(;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j||j==0||i==n-1)
			printf("* ");
			else
			printf("  ");
		}
		puts("");
	}
}
void leftTriangle(int i,int j,int n)
{
	for(;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==n-1||i==n-1||i+j==n-1)
			printf("* ");
			else
			printf("  ");
		}
		puts("");
	}
}
void invertedrightTriangle(int i,int j,int n)
{
	for(;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==0||i==0||i+j==n-1)
			printf("* ");
			else
			printf("  ");
		}
		puts("");
	}
}
void invertedleftTriangle(int i,int j,int n)
{
	for(;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==n-1||i==0||i==j)
			printf("* ");
			else
			printf("  ");
		}
		puts("");
	}
}
