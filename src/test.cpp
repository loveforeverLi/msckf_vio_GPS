#include <msckf_vio/math_utils.hpp>
#include <iostream>
using namespace std;
using namespace Eigen;
using namespace msckf_vio;
int main()
{
    Matrix3d R;
    R<<-0.3725466878150183, -0.5141618990568033, 0.772558416533249,
 0.3964190719880778, -0.840881530050529, -0.3684700419084197,
 0.839083359841065, 0.1689845968666468, 0.5170912117408754;
    Vector3d p;
    p<<1,
    2,
    3;
    cout<<R*R.transpose()<<endl;
    Vector4d q;
    q=rotationToQuaternion(R);
    cout<<q<<endl;

    Matrix3d R2;
    R2=quaternionToRotation(q);
    cout<<R2<<endl;


    cout<<R*p<<endl<<endl<<R2*p<<endl;
    cout<<R.determinant()<<endl;

    return 0;
}