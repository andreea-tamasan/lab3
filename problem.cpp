//
// Created by Home on 15.03.2022.
//

#include "problem.h"
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n<2)
        return false;
    if(n==2)
        return true;
    for(int i=2;i<=n/2;i++)
        if(n%i==0)
            return false;
    return true;
}

int* prime_sequence(int v[], int l,int &start,int &end)
{
    int i,nr=0,max=0,poz=0;
    for(i=0;i<l;i++)
        if(isPrime(v[i]) != 0)
            nr++;
        else
        {
            if(nr>max)
            {
                max = nr;
                poz = i-nr;
                nr = 0;

            }
        }

    if(nr>max)
    {
        max=nr;
        poz=i-nr;
    }
    start=poz;
    end=max;
}

bool asc(int poz1, int poz2, int v[])
{
    int i;
    bool ok = true;
    for(i=poz1;i<poz2;i++)
        if(v[i] >= v[i+1])
            ok = false;
    return ok;
}

bool interval_verify(int poz1, int poz2, int v[], int x, int y)
{
    bool ok = true;
    for(int i= poz1;i< poz2;i++)
        if(v[i] <x or v[i] >y)
            ok = false;
    return ok;

}

void interval_sequence(int v[], int l, int & start, int & end, int x, int y)
{
    start = 0;
    end = 0;
    int len_max = -1;
    for(int i=0;i< l-1;i++)
        for(int j= i+1;j<l;j++)
        {
            bool ok = interval_verify(i, j, v, x, y);
            if(ok)
            {
                if(j-i > len_max)
                {
                    len_max = j-i;
                    start = i;
                    end = j;
                }
            }
        }
}
