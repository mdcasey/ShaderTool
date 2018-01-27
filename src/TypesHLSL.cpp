// Copyright 2017-2018 Chabloom LC
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

#include "TypesHLSL.h"

namespace ShaderTool
{
    TypesTranslatorHLSL::TypesTranslatorHLSL() noexcept
    {
        // Matrix 2 types
        languageIndependentMap_["half2x2"]   = Types::FloatMatrix2x2;
        languageIndependentMap_["half2x3"]   = Types::FloatMatrix2x3;
        languageIndependentMap_["half2x4"]   = Types::FloatMatrix2x4;
        languageIndependentMap_["float2x2"]  = Types::FloatMatrix2x2;
        languageIndependentMap_["float2x3"]  = Types::FloatMatrix2x3;
        languageIndependentMap_["float2x4"]  = Types::FloatMatrix2x4;
        languageIndependentMap_["double2x2"] = Types::DoubleMatrix2x2;
        languageIndependentMap_["double2x3"] = Types::DoubleMatrix2x3;
        languageIndependentMap_["double2x4"] = Types::DoubleMatrix2x4;
        languageIndependentMap_["int2x2"]    = Types::IntMatrix2x2;
        languageIndependentMap_["int2x3"]    = Types::IntMatrix2x3;
        languageIndependentMap_["int2x4"]    = Types::IntMatrix2x4;
        languageIndependentMap_["dword2x2"]  = Types::IntMatrix2x2;
        languageIndependentMap_["dword2x3"]  = Types::IntMatrix2x3;
        languageIndependentMap_["dword2x4"]  = Types::IntMatrix2x4;
        languageIndependentMap_["uint2x2"]   = Types::UIntMatrix2x2;
        languageIndependentMap_["uint2x3"]   = Types::UIntMatrix2x3;
        languageIndependentMap_["uint2x4"]   = Types::UIntMatrix2x4;
        languageIndependentMap_["bool2x2"]   = Types::BoolMatrix2x2;
        languageIndependentMap_["bool2x3"]   = Types::BoolMatrix2x3;
        languageIndependentMap_["bool2x4"]   = Types::BoolMatrix2x4;

        // Matrix 3 types
        languageIndependentMap_["half3x2"]   = Types::FloatMatrix3x2;
        languageIndependentMap_["half3x3"]   = Types::FloatMatrix3x3;
        languageIndependentMap_["half3x4"]   = Types::FloatMatrix3x4;
        languageIndependentMap_["float3x2"]  = Types::FloatMatrix3x2;
        languageIndependentMap_["float3x3"]  = Types::FloatMatrix3x3;
        languageIndependentMap_["float3x4"]  = Types::FloatMatrix3x4;
        languageIndependentMap_["double3x2"] = Types::DoubleMatrix3x2;
        languageIndependentMap_["double3x3"] = Types::DoubleMatrix3x3;
        languageIndependentMap_["double3x4"] = Types::DoubleMatrix3x4;
        languageIndependentMap_["int3x2"]    = Types::IntMatrix3x2;
        languageIndependentMap_["int3x3"]    = Types::IntMatrix3x3;
        languageIndependentMap_["int3x4"]    = Types::IntMatrix3x4;
        languageIndependentMap_["dword3x2"]  = Types::IntMatrix3x2;
        languageIndependentMap_["dword3x3"]  = Types::IntMatrix3x3;
        languageIndependentMap_["dword3x4"]  = Types::IntMatrix3x4;
        languageIndependentMap_["uint3x2"]   = Types::UIntMatrix3x2;
        languageIndependentMap_["uint3x3"]   = Types::UIntMatrix3x3;
        languageIndependentMap_["uint3x4"]   = Types::UIntMatrix3x4;
        languageIndependentMap_["bool3x2"]   = Types::BoolMatrix3x2;
        languageIndependentMap_["bool3x3"]   = Types::BoolMatrix3x3;
        languageIndependentMap_["bool3x4"]   = Types::BoolMatrix3x4;

        // Matrix 4 types
        languageIndependentMap_["half4x2"]   = Types::FloatMatrix4x2;
        languageIndependentMap_["half4x3"]   = Types::FloatMatrix4x3;
        languageIndependentMap_["half4x4"]   = Types::FloatMatrix4x4;
        languageIndependentMap_["float4x2"]  = Types::FloatMatrix4x2;
        languageIndependentMap_["float4x3"]  = Types::FloatMatrix4x3;
        languageIndependentMap_["float4x4"]  = Types::FloatMatrix4x4;
        languageIndependentMap_["double4x2"] = Types::DoubleMatrix4x2;
        languageIndependentMap_["double4x3"] = Types::DoubleMatrix4x3;
        languageIndependentMap_["double4x4"] = Types::DoubleMatrix4x4;
        languageIndependentMap_["int4x2"]    = Types::IntMatrix4x2;
        languageIndependentMap_["int4x3"]    = Types::IntMatrix4x3;
        languageIndependentMap_["int4x4"]    = Types::IntMatrix4x4;
        languageIndependentMap_["dword4x2"]  = Types::IntMatrix4x2;
        languageIndependentMap_["dword4x3"]  = Types::IntMatrix4x3;
        languageIndependentMap_["dword4x4"]  = Types::IntMatrix4x4;
        languageIndependentMap_["uint4x2"]   = Types::UIntMatrix4x2;
        languageIndependentMap_["uint4x3"]   = Types::UIntMatrix4x3;
        languageIndependentMap_["uint4x4"]   = Types::UIntMatrix4x4;
        languageIndependentMap_["bool4x2"]   = Types::BoolMatrix4x2;
        languageIndependentMap_["bool4x3"]   = Types::BoolMatrix4x3;
        languageIndependentMap_["bool4x4"]   = Types::BoolMatrix4x4;

        // Vector 2 types
        languageIndependentMap_["half2"]   = Types::FloatVector2;
        languageIndependentMap_["float2"]  = Types::FloatVector2;
        languageIndependentMap_["double2"] = Types::DoubleVector2;
        languageIndependentMap_["int2"]    = Types::IntVector2;
        languageIndependentMap_["dword2"]  = Types::IntVector2;
        languageIndependentMap_["uint2"]   = Types::UIntVector2;
        languageIndependentMap_["bool2"]   = Types::BoolVector2;

        // Vector 3 types
        languageIndependentMap_["half3"]   = Types::FloatVector3;
        languageIndependentMap_["float3"]  = Types::FloatVector3;
        languageIndependentMap_["double3"] = Types::DoubleVector3;
        languageIndependentMap_["int3"]    = Types::IntVector3;
        languageIndependentMap_["dword3"]  = Types::IntVector3;
        languageIndependentMap_["uint3"]   = Types::UIntVector3;
        languageIndependentMap_["bool3"]   = Types::BoolVector3;

        // Vector 4 types
        languageIndependentMap_["half4"]   = Types::FloatVector4;
        languageIndependentMap_["float4"]  = Types::FloatVector4;
        languageIndependentMap_["double4"] = Types::DoubleVector4;
        languageIndependentMap_["int4"]    = Types::IntVector4;
        languageIndependentMap_["dword4"]  = Types::IntVector4;
        languageIndependentMap_["uint4"]   = Types::UIntVector4;
        languageIndependentMap_["bool4"]   = Types::BoolVector4;

        // Scalar types
        languageIndependentMap_["half"]   = Types::Float;
        languageIndependentMap_["float"]  = Types::Float;
        languageIndependentMap_["double"] = Types::Double;
        languageIndependentMap_["int"]    = Types::Int;
        languageIndependentMap_["dword"]  = Types::Int;
        languageIndependentMap_["uint"]   = Types::UInt;
        languageIndependentMap_["bool"]   = Types::Bool;

        // Other types
        languageIndependentMap_["void"] = Types::Void;

        // Matrix 2 types
        languageSpecificMap_[Types::FloatMatrix2x2]  = "float2x2";
        languageSpecificMap_[Types::FloatMatrix2x3]  = "float2x3";
        languageSpecificMap_[Types::FloatMatrix2x4]  = "float2x4";
        languageSpecificMap_[Types::DoubleMatrix2x2] = "double2x2";
        languageSpecificMap_[Types::DoubleMatrix2x3] = "double2x3";
        languageSpecificMap_[Types::DoubleMatrix2x4] = "double2x4";
        languageSpecificMap_[Types::IntMatrix2x2]    = "int2x2";
        languageSpecificMap_[Types::IntMatrix2x3]    = "int2x3";
        languageSpecificMap_[Types::IntMatrix2x4]    = "int2x4";
        languageSpecificMap_[Types::UIntMatrix2x2]   = "uint2x2";
        languageSpecificMap_[Types::UIntMatrix2x3]   = "uint2x3";
        languageSpecificMap_[Types::UIntMatrix2x4]   = "uint2x4";
        languageSpecificMap_[Types::BoolMatrix2x2]   = "bool2x2";
        languageSpecificMap_[Types::BoolMatrix2x3]   = "bool2x3";
        languageSpecificMap_[Types::BoolMatrix2x4]   = "bool2x4";

        // Matrix 3 types
        languageSpecificMap_[Types::FloatMatrix3x2]  = "float3x2";
        languageSpecificMap_[Types::FloatMatrix3x3]  = "float3x3";
        languageSpecificMap_[Types::FloatMatrix3x4]  = "float3x4";
        languageSpecificMap_[Types::DoubleMatrix3x2] = "double3x2";
        languageSpecificMap_[Types::DoubleMatrix3x3] = "double3x3";
        languageSpecificMap_[Types::DoubleMatrix3x4] = "double3x4";
        languageSpecificMap_[Types::IntMatrix3x2]    = "int3x2";
        languageSpecificMap_[Types::IntMatrix3x3]    = "int3x3";
        languageSpecificMap_[Types::IntMatrix3x4]    = "int3x4";
        languageSpecificMap_[Types::UIntMatrix3x2]   = "uint3x2";
        languageSpecificMap_[Types::UIntMatrix3x3]   = "uint3x3";
        languageSpecificMap_[Types::UIntMatrix3x4]   = "uint3x4";
        languageSpecificMap_[Types::BoolMatrix3x2]   = "bool3x2";
        languageSpecificMap_[Types::BoolMatrix3x3]   = "bool3x3";
        languageSpecificMap_[Types::BoolMatrix3x4]   = "bool3x4";

        // Matrix 4 types
        languageSpecificMap_[Types::FloatMatrix4x2]  = "float4x2";
        languageSpecificMap_[Types::FloatMatrix4x3]  = "float4x3";
        languageSpecificMap_[Types::FloatMatrix4x4]  = "float4x4";
        languageSpecificMap_[Types::DoubleMatrix4x2] = "double4x2";
        languageSpecificMap_[Types::DoubleMatrix4x3] = "double4x3";
        languageSpecificMap_[Types::DoubleMatrix4x4] = "double4x4";
        languageSpecificMap_[Types::IntMatrix4x2]    = "int4x2";
        languageSpecificMap_[Types::IntMatrix4x3]    = "int4x3";
        languageSpecificMap_[Types::IntMatrix4x4]    = "int4x4";
        languageSpecificMap_[Types::UIntMatrix4x2]   = "uint4x2";
        languageSpecificMap_[Types::UIntMatrix4x3]   = "uint4x3";
        languageSpecificMap_[Types::UIntMatrix4x4]   = "uint4x4";
        languageSpecificMap_[Types::BoolMatrix4x2]   = "bool4x2";
        languageSpecificMap_[Types::BoolMatrix4x3]   = "bool4x3";
        languageSpecificMap_[Types::BoolMatrix4x4]   = "bool4x4";

        // Vector 2 types
        languageSpecificMap_[Types::FloatVector2]  = "float2";
        languageSpecificMap_[Types::DoubleVector2] = "double2";
        languageSpecificMap_[Types::IntVector2]    = "int2";
        languageSpecificMap_[Types::UIntVector2]   = "uint2";
        languageSpecificMap_[Types::BoolVector2]   = "bool2";

        // Vector 3 types
        languageSpecificMap_[Types::FloatVector3]  = "float3";
        languageSpecificMap_[Types::DoubleVector3] = "double3";
        languageSpecificMap_[Types::IntVector3]    = "int3";
        languageSpecificMap_[Types::UIntVector3]   = "uint3";
        languageSpecificMap_[Types::BoolVector3]   = "bool3";

        // Vector 4 types
        languageSpecificMap_[Types::FloatVector4]  = "float4";
        languageSpecificMap_[Types::DoubleVector4] = "double4";
        languageSpecificMap_[Types::IntVector4]    = "int4";
        languageSpecificMap_[Types::UIntVector4]   = "uint4";
        languageSpecificMap_[Types::BoolVector4]   = "bool4";

        // Scalar types
        languageSpecificMap_[Types::Float]  = "float";
        languageSpecificMap_[Types::Double] = "double";
        languageSpecificMap_[Types::Int]    = "int";
        languageSpecificMap_[Types::UInt]   = "uint";
        languageSpecificMap_[Types::Bool]   = "bool";

        // Other types
        languageSpecificMap_[Types::Void] = "void";
    }
}
