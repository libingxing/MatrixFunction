#pragma once

#include <stdlib.h>
#include "vector_test.cpp"// һ��C++������ģ�壨֧��ʵ�������븴�������ĸ������㣩
#include "matrix_test.cpp"// ����C++������ģ�壨֧��ʵ�������븴������ĸ������㣩
#include "vectormath_test.cpp"// ����������ѧ���������汾��C++ʵ��
#include "matrixmath_test.cpp"// �ġ�������ѧ��������汾��C++ʵ��
#include "cholesky_test.cpp"// �塢ʵ������Cholesky�ֽ��㷨��C++ʵ��
#include "ccholesky_test.cpp"// ������������Cholesky�ֽ��㷨��C++ʵ��
#include "lud_test.cpp"// �ߡ�ʵ�������븴������LU�ֽ��㷨��C++ʵ��
#include "qrd_test.cpp"// �ˡ�ʵ������QR�ֽ��㷨��C++ʵ��
#include "cqrd_test.cpp"// �š���������QR�ֽ��㷨��C++ʵ��
#include "svd_test.cpp"// ʮ��ʵ������SVD�ֽ��㷨��C++ʵ��
#include "csvd_test.cpp"// ʮһ����������SVD�ֽ��㷨��C++ʵ��
#include "evd_test.cpp"// ʮ����ʵ����������ֵ�ֽ��㷨C++ʵ��
#include "cevd_test.cpp"// ʮ����������������ֵ�ֽ��㷨��C++ʵ��
#include "inverse_test.cpp"// ʮ�ġ�����ʵ�������븴�����������㷨��C++ʵ��
#include "pseudoinverse_test.cpp"// ʮ�塢ʵ�������븴������α���㷨��C++ʵ��
#include "linequs1_test.cpp"// ʮ�����������Է���������㷨C++ʵ�֣�֧�ָ�ϵ�������飩
#include "linequs2_test.cpp"// ʮ�ߡ���С���˽��뼫С�������㷨��C++ʵ�֣�֧�ָ�ϵ�������飩
#include "linequs3_test.cpp"// ʮ�ˡ���̬��������ⷽ����C++ʵ�֣�֧�ָ�ϵ�������飩
#include "nleroot_test.cpp"// ʮ�š������Է�������㷨��C++ʵ��
#include "nleroots_test.cpp"// ��ʮ�������Է���������㷨��C++ʵ��
#include "integral_test.cpp"// ��ʮһ��Romberg��ֵ�����㷨��C++ʵ��
#include "newtoninterp_test.cpp"// ��ʮ����Newton��ֵ�㷨��C++ʵ��
#include "spline3interp_test.cpp"// ��ʮ��������������ֵ�㷨��C++ʵ��
#include "lsfit_test.cpp"// ��ʮ�ġ���С������������㷨��C++ʵ��
#include "steepdesc_test.cpp"// ��ʮ�塢�����½��Ż��㷨��C++ʵ��
#include "conjgrad_test.cpp"// ��ʮ���������ݶ��Ż��㷨��C++ʵ��
#include "utilities_test.cpp"// ��ʮ�ߡ��źŴ����㷨�г��ø���������C++ʵ��
#include "fft_test.cpp"// ��ʮ�ˡ�����Matlab��FFT����������ʽ��C++ʵ��
#include "fftmr_test.cpp"// ��ʮ�š�2�������ݳ���FFT�㷨��C++ʵ��
#include "fftpf_test.cpp"// ��ʮ�����ⳤ��FFT�㷨��C++ʵ��
#include "bfgs_test.cpp"// ��ʮһ��BFGS�Ż��㷨��C++ʵ��

int linequs1_test();

int main()
{
	vector_test();// һ��C++������ģ�壨֧��ʵ�������븴�������ĸ������㣩
	system("pause");
	matrix_test();// ����C++������ģ�壨֧��ʵ�������븴������ĸ������㣩
	system("pause");
	vectormath_test();// ����������ѧ���������汾��C++ʵ��
	system("pause");
	matrixmath_test();// �ġ�������ѧ��������汾��C++ʵ��
	system("pause");
	cholesky_test();// �塢ʵ������Cholesky�ֽ��㷨��C++ʵ��
	system("pause");
	ccholesky_test();// ������������Cholesky�ֽ��㷨��C++ʵ��
	system("pause");
	lud_test();// �ߡ�ʵ�������븴������LU�ֽ��㷨��C++ʵ��
	system("pause");
	qrd_test();// �ˡ�ʵ������QR�ֽ��㷨��C++ʵ��
	system("pause");
	cqrd_test();// �š���������QR�ֽ��㷨��C++ʵ��
	system("pause");
	svd_test();// ʮ��ʵ������SVD�ֽ��㷨��C++ʵ��
	system("pause");
	csvd_test();// ʮһ����������SVD�ֽ��㷨��C++ʵ��
	system("pause");
	evd_test();// ʮ����ʵ����������ֵ�ֽ��㷨C++ʵ��
	system("pause");
	cevd_test();// ʮ����������������ֵ�ֽ��㷨��C++ʵ��
	system("pause");
	inverse_test();// ʮ�ġ�����ʵ�������븴�����������㷨��C++ʵ��
	system("pause");
	pseudoinverse_test();// ʮ�塢ʵ�������븴������α���㷨��C++ʵ��
	system("pause");
	linequs1_test();// ʮ�����������Է���������㷨C++ʵ�֣�֧�ָ�ϵ�������飩
	system("pause");
	linequs2_test();// ʮ�ߡ���С���˽��뼫С�������㷨��C++ʵ�֣�֧�ָ�ϵ�������飩
	system("pause");
	linequs3_test();// ʮ�ˡ���̬��������ⷽ����C++ʵ�֣�֧�ָ�ϵ�������飩
	system("pause");
	nleroot_test();// ʮ�š������Է�������㷨��C++ʵ��
	system("pause");
	nleroots_test();// ��ʮ�������Է���������㷨��C++ʵ��
	system("pause");
	integral_test();// ��ʮһ��Romberg��ֵ�����㷨��C++ʵ��
	system("pause");
	newtoninterp_test();// ��ʮ����Newton��ֵ�㷨��C++ʵ��
	system("pause");
	spline3interp_test();// ��ʮ��������������ֵ�㷨��C++ʵ��
	system("pause");
	lsfit_test();// ��ʮ�ġ���С������������㷨��C++ʵ��
	system("pause");
	steepdesc_test();// ��ʮ�塢�����½��Ż��㷨��C++ʵ��
	system("pause");
	conjgrad_test();// ��ʮ���������ݶ��Ż��㷨��C++ʵ��
	system("pause");
	utilities_test();// ��ʮ�ߡ��źŴ����㷨�г��ø���������C++ʵ��
	system("pause");
	fft_test();// ��ʮ�ˡ�����Matlab��FFT����������ʽ��C++ʵ��
	system("pause");
	fftmr_test();// ��ʮ�š�2�������ݳ���FFT�㷨��C++ʵ��
	system("pause");
	system("pause");
	fftpf_test();// ��ʮ�����ⳤ��FFT�㷨��C++ʵ��
	system("pause");
	bfgs_test();// ��ʮһ��BFGS�Ż��㷨��C++ʵ��
	system("pause");

	return 0;
}