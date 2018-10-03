#include <msckf_vio/math_utils.hpp>
#include <iostream>
using namespace std;
using namespace Eigen;
using namespace msckf_vio;
int main()
{
    Matrix3d R;
    R<<-0.6596738530391704, -0.6529761836787117, -0.3720920735044492,
 -0.6300248419083423, 0.7504032831375792, -0.1999090073876366,
 -0.4097549343141865, -0.1025525046243498, 0.9064126420127036;
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