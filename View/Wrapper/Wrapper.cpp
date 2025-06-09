// This is the main DLL file.

#include "stdafx.h"

#include <msclr/marshal_cppstd.h>

#include "Wrapper.h"

#include <string>

namespace  SampleWrapper  {
namespace  Common  {

//----------------------------------------------------------------
//    インスタンスを初期化する
//  （デフォルトコンストラクタ）。
//

SampleDocument::SampleDocument()
{
}

//----------------------------------------------------------------
//    インスタンスを破棄する
//  （デストラクタ）。
//

SampleDocument::~SampleDocument()
{
    this->!SampleDocument();
}

//----------------------------------------------------------------
//    インスタンスを破棄する
//  （ファイナライザ）。
//

SampleDocument::!SampleDocument()
{
}

}   //  End of namespace  Common
}   //  End of namespace  SampleWrapper
