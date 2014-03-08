
int doSomething(const double &val)
{
    double a = val;
	int pippo = 3;
	int pippo2 = 3;
	return a;
}

int testPtrs(const double *dp1, double * const dp2, const double &dp3, const int dp4)
{
    double b;
    //*dp1 = 4.0; // fails
    dp1 = &b;
    //*dp3 = 4;
    *dp2 = 3;
    //dp2 = &b;
    int r = dp4;
    //dp4++;
    doSomething(dp3);
	int second = 2;
	return 0;
}

int testAgain(double const *val)
{
    return 0;
}

int main(int argc, char *argv[])
{

    double a = 5; double b = 4; double c = 3; int d = 2;
    testPtrs(&a, &b, c, d);
    return 0;
}
