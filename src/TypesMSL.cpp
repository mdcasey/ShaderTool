// Copyright 2017 Chabloom LC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "TypesMSL.h"

namespace ShaderTool
{
    TypesTranslatorMSL::TypesTranslatorMSL() noexcept
    {
        // Matrix 2 types
        languageIndependentMap_["half2x2"]  = Types::FloatMatrix2x2;
        languageIndependentMap_["half2x3"]  = Types::FloatMatrix2x3;
        languageIndependentMap_["half2x4"]  = Types::FloatMatrix2x4;
        languageIndependentMap_["float2x2"] = Types::FloatMatrix2x2;
        languageIndependentMap_["float2x3"] = Types::FloatMatrix2x3;
        languageIndependentMap_["float2x4"] = Types::FloatMatrix2x4;

        // Matrix 3 types
        languageIndependentMap_["half3x2"]  = Types::FloatMatrix3x2;
        languageIndependentMap_["half3x3"]  = Types::FloatMatrix3x3;
        languageIndependentMap_["half3x4"]  = Types::FloatMatrix3x4;
        languageIndependentMap_["float3x2"] = Types::FloatMatrix3x2;
        languageIndependentMap_["float3x3"] = Types::FloatMatrix3x3;
        languageIndependentMap_["float3x4"] = Types::FloatMatrix3x4;

        // Matrix 4 types
        languageIndependentMap_["half4x2"]  = Types::FloatMatrix4x2;
        languageIndependentMap_["half4x3"]  = Types::FloatMatrix4x3;
        languageIndependentMap_["half4x4"]  = Types::FloatMatrix4x4;
        languageIndependentMap_["float4x2"] = Types::FloatMatrix4x2;
        languageIndependentMap_["float4x3"] = Types::FloatMatrix4x3;
        languageIndependentMap_["float4x4"] = Types::FloatMatrix4x4;

        // Vector 2 types
        languageIndependentMap_["half2"]   = Types::FloatVector2;
        languageIndependentMap_["float2"]  = Types::FloatVector2;
        languageIndependentMap_["int2"]    = Types::IntVector2;
        languageIndependentMap_["uint2"]   = Types::UIntVector2;
        languageIndependentMap_["char2"]   = Types::IntVector2;
        languageIndependentMap_["uchar2"]  = Types::UIntVector2;
        languageIndependentMap_["short2"]  = Types::IntVector2;
        languageIndependentMap_["ushort2"] = Types::UIntVector2;
        languageIndependentMap_["bool2"]   = Types::BoolVector2;

        // Vector 3 types
        languageIndependentMap_["half3"]   = Types::FloatVector3;
        languageIndependentMap_["float3"]  = Types::FloatVector3;
        languageIndependentMap_["int3"]    = Types::IntVector3;
        languageIndependentMap_["uint3"]   = Types::UIntVector3;
        languageIndependentMap_["char3"]   = Types::IntVector3;
        languageIndependentMap_["uchar3"]  = Types::UIntVector3;
        languageIndependentMap_["short3"]  = Types::IntVector3;
        languageIndependentMap_["ushort3"] = Types::UIntVector3;
        languageIndependentMap_["bool3"]   = Types::BoolVector3;

        // Vector 4 types
        languageIndependentMap_["half4"]   = Types::FloatVector4;
        languageIndependentMap_["float4"]  = Types::FloatVector4;
        languageIndependentMap_["int4"]    = Types::IntVector4;
        languageIndependentMap_["uint4"]   = Types::UIntVector4;
        languageIndependentMap_["char4"]   = Types::IntVector4;
        languageIndependentMap_["uchar4"]  = Types::UIntVector4;
        languageIndependentMap_["short4"]  = Types::IntVector4;
        languageIndependentMap_["ushort4"] = Types::UIntVector4;
        languageIndependentMap_["bool4"]   = Types::BoolVector4;

        // Scalar types
        languageIndependentMap_["half"]   = Types::Float;
        languageIndependentMap_["float"]  = Types::Float;
        languageIndependentMap_["int"]    = Types::Int;
        languageIndependentMap_["uint"]   = Types::UInt;
        languageIndependentMap_["char"]   = Types::Int;
        languageIndependentMap_["uchar"]  = Types::UInt;
        languageIndependentMap_["short"]  = Types::Int;
        languageIndependentMap_["ushort"] = Types::UInt;
        languageIndependentMap_["bool"]   = Types::Bool;

        // Other types
        languageIndependentMap_["void"] = Types::Void;

        // Matrix 2 types
        languageSpecificMap_[Types::FloatMatrix2x2]  = "float2x2";
        languageSpecificMap_[Types::FloatMatrix2x3]  = "float2x3";
        languageSpecificMap_[Types::FloatMatrix2x4]  = "float2x4";
        languageSpecificMap_[Types::DoubleMatrix2x2] = "float2x2";
        languageSpecificMap_[Types::DoubleMatrix2x3] = "float2x3";
        languageSpecificMap_[Types::DoubleMatrix2x4] = "float2x4";
        languageSpecificMap_[Types::IntMatrix2x2]    = "float2x2";
        languageSpecificMap_[Types::IntMatrix2x3]    = "float2x3";
        languageSpecificMap_[Types::IntMatrix2x4]    = "float2x4";
        languageSpecificMap_[Types::UIntMatrix2x2]   = "float2x2";
        languageSpecificMap_[Types::UIntMatrix2x3]   = "float2x3";
        languageSpecificMap_[Types::UIntMatrix2x4]   = "float2x4";
        languageSpecificMap_[Types::BoolMatrix2x2]   = "float2x2";
        languageSpecificMap_[Types::BoolMatrix2x3]   = "float2x3";
        languageSpecificMap_[Types::BoolMatrix2x4]   = "float2x4";

        // Matrix 3 types
        languageSpecificMap_[Types::FloatMatrix3x2]  = "float3x2";
        languageSpecificMap_[Types::FloatMatrix3x3]  = "float3x3";
        languageSpecificMap_[Types::FloatMatrix3x4]  = "float3x4";
        languageSpecificMap_[Types::DoubleMatrix3x2] = "float3x2";
        languageSpecificMap_[Types::DoubleMatrix3x3] = "float3x3";
        languageSpecificMap_[Types::DoubleMatrix3x4] = "float3x4";
        languageSpecificMap_[Types::IntMatrix3x2]    = "float3x2";
        languageSpecificMap_[Types::IntMatrix3x3]    = "float3x3";
        languageSpecificMap_[Types::IntMatrix3x4]    = "float3x4";
        languageSpecificMap_[Types::UIntMatrix3x2]   = "float3x2";
        languageSpecificMap_[Types::UIntMatrix3x3]   = "float3x3";
        languageSpecificMap_[Types::UIntMatrix3x4]   = "float3x4";
        languageSpecificMap_[Types::BoolMatrix3x2]   = "float3x2";
        languageSpecificMap_[Types::BoolMatrix3x3]   = "float3x3";
        languageSpecificMap_[Types::BoolMatrix3x4]   = "float3x4";

        // Matrix 4 types
        languageSpecificMap_[Types::FloatMatrix4x2]  = "float4x2";
        languageSpecificMap_[Types::FloatMatrix4x3]  = "float4x3";
        languageSpecificMap_[Types::FloatMatrix4x4]  = "float4x4";
        languageSpecificMap_[Types::DoubleMatrix4x2] = "float4x2";
        languageSpecificMap_[Types::DoubleMatrix4x3] = "float4x3";
        languageSpecificMap_[Types::DoubleMatrix4x4] = "float4x4";
        languageSpecificMap_[Types::IntMatrix4x2]    = "float4x2";
        languageSpecificMap_[Types::IntMatrix4x3]    = "float4x3";
        languageSpecificMap_[Types::IntMatrix4x4]    = "float4x4";
        languageSpecificMap_[Types::UIntMatrix4x2]   = "float4x2";
        languageSpecificMap_[Types::UIntMatrix4x3]   = "float4x3";
        languageSpecificMap_[Types::UIntMatrix4x4]   = "float4x4";
        languageSpecificMap_[Types::BoolMatrix4x2]   = "float4x2";
        languageSpecificMap_[Types::BoolMatrix4x3]   = "float4x3";
        languageSpecificMap_[Types::BoolMatrix4x4]   = "float4x4";

        // Vector 2 types
        languageSpecificMap_[Types::FloatVector2]  = "float2";
        languageSpecificMap_[Types::DoubleVector2] = "float2";
        languageSpecificMap_[Types::IntVector2]    = "int2";
        languageSpecificMap_[Types::UIntVector2]   = "uint2";
        languageSpecificMap_[Types::BoolVector2]   = "bool2";

        // Vector 3 types
        languageSpecificMap_[Types::FloatVector3]  = "float3";
        languageSpecificMap_[Types::DoubleVector3] = "float3";
        languageSpecificMap_[Types::IntVector3]    = "int3";
        languageSpecificMap_[Types::UIntVector3]   = "uint3";
        languageSpecificMap_[Types::BoolVector3]   = "bool3";

        // Vector 4 types
        languageSpecificMap_[Types::FloatVector4]  = "float4";
        languageSpecificMap_[Types::DoubleVector4] = "float4";
        languageSpecificMap_[Types::IntVector4]    = "int4";
        languageSpecificMap_[Types::UIntVector4]   = "uint4";
        languageSpecificMap_[Types::BoolVector4]   = "bool4";

        // Scalar types
        languageSpecificMap_[Types::Float]  = "float";
        languageSpecificMap_[Types::Double] = "float";
        languageSpecificMap_[Types::Int]    = "int";
        languageSpecificMap_[Types::UInt]   = "uint";
        languageSpecificMap_[Types::Bool]   = "bool";

        // Other types
        languageSpecificMap_[Types::Void] = "void";
    }
}
