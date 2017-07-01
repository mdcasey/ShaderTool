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
    // Supported language-independent intrinsics
    enum class Intrinsics
    {
        // Trigonometry intrinsics
        Radians,
        Degrees,
        Sin,
        Cos,
        Tan,
        ASin,
        ACos,
        ATan,
        Sinh,
        Cosh,
        Tanh,
        ASinh,
        ACosh,
        ATanh,

        // Exponential intrinsics
        Pow,
        Exp,
        Log,
        Exp2,
        Log2,
        Sqrt,
        RSqrt,

        // Common intrinsics
        Abs,
        Sign,
        Floor,
        Trunc,
        Round,
        RoundEven,
        Ceil,
        Fract,
        Mod,
        Modf,
        Min,
        Max,
        Clamp,
        Mix,
        Step,
        Smoothstep,
        Isnan,
        Isinf,
        Fma,
        Frexp,
        Ldexp,

        // Geometric intrinsics
        Length,
        Distance,
        Dot,
        Cross,
        Normalize,
        Faceforward,
        Reflect,
        Refract,

        // Matrix intrinsics
        Transpose,
        Determinant,

        // Vector relational intrinsics
        Any,
        All,
        Not,

        // Texture intrinsics
        Texture1dLod,
        Texture2dLod,
        Texture3dLod,
        TextureCubeLod,

        // Atomic intrinsics
        AtomicAdd,
        AtomicAnd,
        AtomicCompareExchange,
        AtomicCounter,
        AtomicCounterDecrement,
        AtomicCounterIncrement,
        AtomicExchange,
        AtomicMax,
        AtomicMin,
        AtomicOr,
        AtomicXor
    };

    class IntrinsicsTranslator
    {
    public:
        // Check if the language-independent intrinsic has a language-specific intrinsic
        bool HasLanguageSpecificIntrinsic(Intrinsics intrinsic) const noexcept;
        // Check if the language-specific intrinsic has a language-independent intrinsic
        bool HasLanguageIndependentIntrinsic(const std::string &name) const noexcept;

        // Get the language-specific intrinsic of the specified language-independent intrinsic
        std::string GetLanguageSpecificIntrinsic(Intrinsics intrinsic) const;
        // Get the language-independent intrinsic of the specified language-specific intrinsic
        Intrinsics GetLanguageIndependentIntrinsic(const std::string &name) const;

        template <typename T>
        std::string GenerateExpression(T t)
        {
            return std::string(t);
        }

        template <typename T, typename... Args>
        std::string GenerateExpression(T first, Args... args)
        {
            return first + std::string(", ") + GenerateExpression(args...);
        }

        template <typename T, typename... Args>
        std::string GenerateExpression(Intrinsics intrinsic, T first, Args... args)
        {
            return GetLanguageSpecificIntrinsic(intrinsic) + std::string("(") + GenerateExpression(first, args...) + std::string(");");
        }

    protected:
        // Force usage of derived class
        IntrinsicsTranslator() = default;

        // A map of language-specific intrinsics
        std::map<Intrinsics, std::string> languageSpecificMap_;
        // A map of language-independent intrinsics
        std::map<std::string, Intrinsics> languageIndependentMap_;
    };
}
