#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int finduniqueno(vector<int> arr)
{
  int ans = 0 ;

  for(int i = 0 ; i < arr.size() ; i++)
    {
      ans = ans ^ arr[i];
    }
  return ans;
}

int PrintArray(vector<int>ins)
{
  for(int i = 0 ; i < ins.size() ; i++)
    {
      if(i == ins.size()-1)
      {
      cout << ins[i] << " ]";
      }
      else if(i== 0)
      {
        cout << "[ " << ins[i] << " , ";
      }
      else
      {
        cout << ins[i] << " , ";
      }
    }
  return 0;
}

int main() {

  // Problem Solving 

  //
  // 1. Find Unique Element
  //



  //  int n;
  //  cout << "Enter the size of vector: " << endl;
  //  cin >> n;

  // vector<int> arr(n);
  // cout << "Enter the elements: " <<endl;

  // for(int i = 0 ; i < arr.size() ; i++)
  //   {
  //     cin >> arr[i];
  //   }

  // int uniqueElement = finduniqueno(arr);

  // cout << " The unique element is: " << uniqueElement << endl;


  //
  // 2. Union of 2 Vector
  //



 // vector<int>brr{10,30,50,70,90};
 //  vector<int>crr{20,40,60,80,100};
 //  vector<int>ans;

 //  for(int i = 0 ; i < brr.size() ; i++)
 //    {
 //      ans.push_back(brr[i]);
 //    }
 //  for(int i = 0 ; i < crr.size() ; i++)
 //  {
 //    ans.push_back(crr[i]);
 //  }

 //  PrintArray(ans);


  //
  // 3. Intersection of 2 vector
  //



  // vector<int>drr{10,30,50,70,90};
  // vector<int>err{10,20,30,40,50,60};
  // vector<int>ins;

  // for(int i = 0;i<drr.size();i++)
  //   {
  //     int ele = drr[i];
  //     for(int j = 0;j<err.size();j++)
  //       {
  //     if(ele == err[j])
  //     {
  //       drr[i] = INT_MIN;
  //       ins.push_back(ele);
  //     }
  //       }
  //   }

  // for(auto value: ins)
  //   {
  //     cout << value << " ";
  //   }

  // PrintArray(ins);


  //
  // 4. Pair Sum
  //



  // vector<int>frr{1,3,5,7};
  // vector<int>grr{2,4,6,8};
  // int sum = 9;

  // for(int i = 0 ; i < frr.size() ; i++)
  //   {
  //     int element = frr[i];
  //     for(int j = 0 ; j < grr.size() ; j++)
  //       {

  //         if(element + grr[j] == sum)
  //         {
  //           cout << frr[i] << " " << grr[j] << endl;
  //         }

  //       }
  //   }


  //
  // 5. Triplet Sum
  //



  // vector<int>hrr{1,2,3,4};
  // vector<int>irr{9,7,11,14,22};
  // vector<int>jrr{17,16};
  // int tripletsum = 30;

  // for(int i = 0 ; i < hrr.size() ; i++)
  //   {
  //     int element = hrr[i];

  //     for(int j = 0 ; j < irr.size() ; j++)
  //       {

  //         int element1 = irr[j];

  //         for(int k = 0 ; k < jrr.size() ; k++)
  //           {
  //             if(element + element1 + jrr[k] == tripletsum)
  //             {
  //               cout << "[ " << element << " , " << element1 << " , " << jrr[k] << "]"  << endl;
  //             }

  //           }

  //       }
  //   }


  //
  // 6. Sort 0's and 1's
  //




  // vector<int>lrr{1,1,1,0};
  // int s = 0;
  // int e = lrr.size()-1;
  // int start = 0;

  // while(start!=e)
  //   {
  //     if(lrr[s] == 0 )
  //     {
  //       swap(lrr[s],lrr[start]);
  //       start++;
  //       s++;
  //     }
  //     else if(lrr[s] == 1)
  //     {
  //       swap(lrr[s],lrr[e]);
  //       e--;
  //     }
  //     else
  //       {
  //         e--;
  //       }

  //   }

  // for(int i = 0 ; i < lrr.size() ; i++)
  //   {
  //     cout << lrr[i] << " ";
  //   }



  return 0;
}