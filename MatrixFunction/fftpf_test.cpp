/*****************************************************************************
*                               fftpf_test.cpp
*
* Prime factor FFT test.
* ���ⳤ��FFT�㷨��C++ʵ��
* Zhang Ming, 2010-09, Xi'an Jiaotong University.
*****************************************************************************/

#pragma once

#include <iostream>
#include <cstdlib>
#include "vectormath.h"
#include "fftpf.h"


using namespace std;
using namespace splab;





int fftpf_test()
{
	typedef double  Type;
	const   int     MINLEN = 101;
	const   int     MAXLEN = 1000;
	const   int     STEP = 10;

	Vector< complex<Type> >  sn, Rk, Sk, xn;
	Vector<Type> rn, tn;
	FFTPF<Type> Fourier;

	cout << "forward transform: Sk = fft(sn)  ( complex to complex )." << endl;
	cout << "inverse transform: xn = ifft(Sk) ( complex to complex )." << endl << endl;
	for (int len = MINLEN; len<MAXLEN; len += STEP)
	{
		sn.resize(len);
		Sk.resize(len);
		xn.resize(len);
		for (int i = 0; i<len; ++i)
			sn[i] = complex<Type>(rand() % 10, rand() % 10);

		Fourier.fft(sn, Sk);
		Fourier.ifft(Sk, xn);
		cout << "N = " << len << "\t\t" << "mean(abs((sn-xn)) = "
			<< sum(abs(sn - xn)) / len << endl;
	}
	cout << endl << endl;

	cout << "forward transform: Rk = fft(rn)  ( real to complex )." << endl;
	cout << "inverse transform: tn = ifft(Rk) ( complex to real )." << endl << endl;;
	for (int len = MINLEN; len<MAXLEN; len += STEP)
	{
		rn.resize(len);
		Rk.resize(len);
		tn.resize(len);
		for (int i = 0; i<len; ++i)
			rn[i] = rand() % 10;

		Fourier.fft(rn, Rk);
		Fourier.ifft(Rk, tn);
		cout << "N = " << len << "\t\t" << "mean(abs((rn-tn)) = "
			<< sum(abs(sn - xn)) / len << endl;
	}
	cout << endl;

	return 0;
}