#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;


void throwit()
{
    //throw hresult_error(E_NOINTERFACE, take_ownership_from_abi);
    winrt::check_hresult(E_NOINTERFACE);
}
