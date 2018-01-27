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

#include "Intrinsics.h"

namespace ShaderTool
{
    bool IntrinsicsTranslator::HasLanguageIndependentIntrinsic(const std::string &name) const noexcept
    {
        if (languageIndependentMap_.find(name) == languageIndependentMap_.end())
        {
            return false;
        }
        return true;
    }

    bool IntrinsicsTranslator::HasLanguageSpecificIntrinsic(Intrinsics intrinsic) const noexcept
    {
        if (languageSpecificMap_.find(intrinsic) == languageSpecificMap_.end())
        {
            return false;
        }
        return true;
    }

    Intrinsics IntrinsicsTranslator::GetLanguageIndependentIntrinsic(const std::string &name) const
    {
        if (!HasLanguageIndependentIntrinsic(name))
        {
            throw std::runtime_error("type " + name + "has no language-independent intrinsic");
        }
        return languageIndependentMap_.at(name);
    }

    std::string IntrinsicsTranslator::GetLanguageSpecificIntrinsic(Intrinsics intrinsic) const
    {
        if (!HasLanguageSpecificIntrinsic(intrinsic))
        {
            throw std::runtime_error("unable to find language-specific intrinsic");
        }
        return languageSpecificMap_.at(intrinsic);
    }
}
