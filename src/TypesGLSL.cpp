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

#include "TypesGLSL.h"

namespace ShaderTool
{
    TypesTranslatorGLSL::TypesTranslatorGLSL() noexcept
    {
        // Matrix 2 types
        languageIndependentMap_["mat2"]    = Types::FloatMatrix2x2;
        languageIndependentMap_["mat2x2"]  = Types::FloatMatrix2x2;
        languageIndependentMap_["mat2x3"]  = Types::FloatMatrix2x3;
        languageIndependentMap_["mat2x4"]  = Types::FloatMatrix2x4;
        languageIndependentMap_["dmat2"]   = Types::DoubleMatrix2x2;
        languageIndependentMap_["dmat2x2"] = Types::DoubleMatrix2x2;
        languageIndependentMap_["dmat2x3"] = Types::DoubleMatrix2x3;
        languageIndependentMap_["dmat2x4"] = Types::DoubleMatrix2x4;

        // Matrix 3 types
        languageIndependentMap_["mat3"]    = Types::FloatMatrix3x3;
        languageIndependentMap_["mat3x2"]  = Types::FloatMatrix3x2;
        languageIndependentMap_["mat3x3"]  = Types::FloatMatrix3x3;
        languageIndependentMap_["mat3x4"]  = Types::FloatMatrix3x4;
        languageIndependentMap_["dmat3"]   = Types::DoubleMatrix3x3;
        languageIndependentMap_["dmat3x2"] = Types::DoubleMatrix3x2;
        languageIndependentMap_["dmat3x3"] = Types::DoubleMatrix3x3;
        languageIndependentMap_["dmat3x4"] = Types::DoubleMatrix3x4;

        // Matrix 4 types
        languageIndependentMap_["mat4"]    = Types::FloatMatrix4x4;
        languageIndependentMap_["mat4x2"]  = Types::FloatMatrix4x2;
        languageIndependentMap_["mat4x3"]  = Types::FloatMatrix4x3;
        languageIndependentMap_["mat4x4"]  = Types::FloatMatrix4x4;
        languageIndependentMap_["dmat4"]   = Types::DoubleMatrix4x4;
        languageIndependentMap_["dmat4x2"] = Types::DoubleMatrix4x2;
        languageIndependentMap_["dmat4x3"] = Types::DoubleMatrix4x3;
        languageIndependentMap_["dmat4x4"] = Types::DoubleMatrix4x4;

        // Vector 2 types
        languageIndependentMap_["vec2"]  = Types::FloatVector2;
        languageIndependentMap_["dvec2"] = Types::DoubleVector2;
        languageIndependentMap_["ivec2"] = Types::IntVector2;
        languageIndependentMap_["uvec2"] = Types::UIntVector2;
        languageIndependentMap_["bvec2"] = Types::BoolVector2;

        // Vector 3 types
        languageIndependentMap_["vec3"]  = Types::FloatVector3;
        languageIndependentMap_["dvec3"] = Types::DoubleVector3;
        languageIndependentMap_["ivec3"] = Types::IntVector3;
        languageIndependentMap_["uvec3"] = Types::UIntVector3;
        languageIndependentMap_["bvec3"] = Types::BoolVector3;

        // Vector 4 types
        languageIndependentMap_["vec4"]  = Types::FloatVector4;
        languageIndependentMap_["dvec4"] = Types::DoubleVector4;
        languageIndependentMap_["ivec4"] = Types::IntVector4;
        languageIndependentMap_["uvec4"] = Types::UIntVector4;
        languageIndependentMap_["bvec4"] = Types::BoolVector4;

        // Scalar types
        languageIndependentMap_["float"]  = Types::Float;
        languageIndependentMap_["double"] = Types::Double;
        languageIndependentMap_["int"]    = Types::Int;
        languageIndependentMap_["uint"]   = Types::UInt;
        languageIndependentMap_["bool"]   = Types::Bool;

        // Other types
        languageIndependentMap_["void"] = Types::Void;

        // Matrix 2 types
        languageSpecificMap_[Types::FloatMatrix2x2]  = "mat2x2";
        languageSpecificMap_[Types::FloatMatrix2x3]  = "mat2x3";
        languageSpecificMap_[Types::FloatMatrix2x4]  = "mat2x4";
        languageSpecificMap_[Types::DoubleMatrix2x2] = "dmat2x2";
        languageSpecificMap_[Types::DoubleMatrix2x3] = "dmat2x3";
        languageSpecificMap_[Types::DoubleMatrix2x4] = "dmat2x4";
        languageSpecificMap_[Types::IntMatrix2x2]    = "mat2x2";
        languageSpecificMap_[Types::IntMatrix2x3]    = "mat2x3";
        languageSpecificMap_[Types::IntMatrix2x4]    = "mat2x4";
        languageSpecificMap_[Types::UIntMatrix2x2]   = "mat2x2";
        languageSpecificMap_[Types::UIntMatrix2x3]   = "mat2x3";
        languageSpecificMap_[Types::UIntMatrix2x4]   = "mat2x4";
        languageSpecificMap_[Types::BoolMatrix2x2]   = "mat2x2";
        languageSpecificMap_[Types::BoolMatrix2x3]   = "mat2x3";
        languageSpecificMap_[Types::BoolMatrix2x4]   = "mat2x4";

        // Matrix 3 types
        languageSpecificMap_[Types::FloatMatrix3x2]  = "mat3x2";
        languageSpecificMap_[Types::FloatMatrix3x3]  = "mat3x3";
        languageSpecificMap_[Types::FloatMatrix3x4]  = "mat3x4";
        languageSpecificMap_[Types::DoubleMatrix3x2] = "dmat3x2";
        languageSpecificMap_[Types::DoubleMatrix3x3] = "dmat3x3";
        languageSpecificMap_[Types::DoubleMatrix3x4] = "dmat3x4";
        languageSpecificMap_[Types::IntMatrix3x2]    = "mat3x2";
        languageSpecificMap_[Types::IntMatrix3x3]    = "mat3x3";
        languageSpecificMap_[Types::IntMatrix3x4]    = "mat3x4";
        languageSpecificMap_[Types::UIntMatrix3x2]   = "mat3x2";
        languageSpecificMap_[Types::UIntMatrix3x3]   = "mat3x3";
        languageSpecificMap_[Types::UIntMatrix3x4]   = "mat3x4";
        languageSpecificMap_[Types::BoolMatrix3x2]   = "mat3x2";
        languageSpecificMap_[Types::BoolMatrix3x3]   = "mat3x3";
        languageSpecificMap_[Types::BoolMatrix3x4]   = "mat3x4";

        // Matrix 4 types
        languageSpecificMap_[Types::FloatMatrix4x2]  = "mat4x2";
        languageSpecificMap_[Types::FloatMatrix4x3]  = "mat4x3";
        languageSpecificMap_[Types::FloatMatrix4x4]  = "mat4x4";
        languageSpecificMap_[Types::DoubleMatrix4x2] = "dmat4x2";
        languageSpecificMap_[Types::DoubleMatrix4x3] = "dmat4x3";
        languageSpecificMap_[Types::DoubleMatrix4x4] = "dmat4x4";
        languageSpecificMap_[Types::IntMatrix4x2]    = "mat4x2";
        languageSpecificMap_[Types::IntMatrix4x3]    = "mat4x3";
        languageSpecificMap_[Types::IntMatrix4x4]    = "mat4x4";
        languageSpecificMap_[Types::UIntMatrix4x2]   = "mat4x2";
        languageSpecificMap_[Types::UIntMatrix4x3]   = "mat4x3";
        languageSpecificMap_[Types::UIntMatrix4x4]   = "mat4x4";
        languageSpecificMap_[Types::BoolMatrix4x2]   = "mat4x2";
        languageSpecificMap_[Types::BoolMatrix4x3]   = "mat4x3";
        languageSpecificMap_[Types::BoolMatrix4x4]   = "mat4x4";

        // Vector 2 types
        languageSpecificMap_[Types::FloatVector2]  = "vec2";
        languageSpecificMap_[Types::DoubleVector2] = "dvec2";
        languageSpecificMap_[Types::IntVector2]    = "ivec2";
        languageSpecificMap_[Types::UIntVector2]   = "uvec2";
        languageSpecificMap_[Types::BoolVector2]   = "bvec2";

        // Vector 3 types
        languageSpecificMap_[Types::FloatVector3]  = "vec3";
        languageSpecificMap_[Types::DoubleVector3] = "dvec3";
        languageSpecificMap_[Types::IntVector3]    = "ivec3";
        languageSpecificMap_[Types::UIntVector3]   = "uvec3";
        languageSpecificMap_[Types::BoolVector3]   = "bvec3";

        // Vector 4 types
        languageSpecificMap_[Types::FloatVector4]  = "vec4";
        languageSpecificMap_[Types::DoubleVector4] = "dvec4";
        languageSpecificMap_[Types::IntVector4]    = "ivec4";
        languageSpecificMap_[Types::UIntVector4]   = "uvec4";
        languageSpecificMap_[Types::BoolVector4]   = "bvec4";

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
