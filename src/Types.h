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

#pragma once

#include <map>
#include <string>

namespace ShaderTool
{
    // Supported language-independent types
    enum class Types
    {
        // Matrix 2 types
        FloatMatrix2x2,
        FloatMatrix2x3,
        FloatMatrix2x4,
        DoubleMatrix2x2,
        DoubleMatrix2x3,
        DoubleMatrix2x4,
        IntMatrix2x2,
        IntMatrix2x3,
        IntMatrix2x4,
        UIntMatrix2x2,
        UIntMatrix2x3,
        UIntMatrix2x4,
        BoolMatrix2x2,
        BoolMatrix2x3,
        BoolMatrix2x4,

        // Matrix 3 types
        FloatMatrix3x2,
        FloatMatrix3x3,
        FloatMatrix3x4,
        DoubleMatrix3x2,
        DoubleMatrix3x3,
        DoubleMatrix3x4,
        IntMatrix3x2,
        IntMatrix3x3,
        IntMatrix3x4,
        UIntMatrix3x2,
        UIntMatrix3x3,
        UIntMatrix3x4,
        BoolMatrix3x2,
        BoolMatrix3x3,
        BoolMatrix3x4,

        // Matrix 4 types
        FloatMatrix4x2,
        FloatMatrix4x3,
        FloatMatrix4x4,
        DoubleMatrix4x2,
        DoubleMatrix4x3,
        DoubleMatrix4x4,
        IntMatrix4x2,
        IntMatrix4x3,
        IntMatrix4x4,
        UIntMatrix4x2,
        UIntMatrix4x3,
        UIntMatrix4x4,
        BoolMatrix4x2,
        BoolMatrix4x3,
        BoolMatrix4x4,

        // Vector 2 types
        FloatVector2,
        DoubleVector2,
        IntVector2,
        UIntVector2,
        BoolVector2,

        // Vector 3 types
        FloatVector3,
        DoubleVector3,
        IntVector3,
        UIntVector3,
        BoolVector3,

        // Vector 4 types
        FloatVector4,
        DoubleVector4,
        IntVector4,
        UIntVector4,
        BoolVector4,

        // Scalar types
        Float,
        Double,
        Int,
        UInt,
        Bool,

        // Other types
        Void
    };

    class TypesTranslator
    {
    public:
        // Check if the language-independent type has a language-specific type
        bool HasLanguageSpecificType(Types type) const noexcept;
        // Check if the language-specific type has a language-independent type
        bool HasLanguageIndependentType(const std::string &name) const noexcept;

        // Get the language-specific type of the specified language-independent type
        std::string GetLanguageSpecificType(Types type) const;
        // Get the language-independent type of the specified language-specific type
        Types GetLanguageIndependentType(const std::string &name) const;

    protected:
        // Force usage of derived class
        TypesTranslator() = default;

        // A map of language-specific types
        std::map<Types, std::string> languageSpecificMap_;
        // A map of language-independent types
        std::map<std::string, Types> languageIndependentMap_;
    };
}
