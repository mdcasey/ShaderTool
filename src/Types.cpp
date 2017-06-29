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

#include "Types.h"

namespace ShaderTool
{
    bool TypesTranslator::HasLanguageIndependentType(const std::string &name) const noexcept
    {
        if (languageIndependentMap_.find(name) == languageIndependentMap_.end())
        {
            return false;
        }
        return true;
    }

    bool TypesTranslator::HasLanguageSpecificType(Types type) const noexcept
    {
        if (languageSpecificMap_.find(type) == languageSpecificMap_.end())
        {
            return false;
        }
        return true;
    }

    Types TypesTranslator::GetLanguageIndependentType(const std::string &name) const
    {
        if (!HasLanguageIndependentType(name))
        {
            throw std::runtime_error("type " + name + "has no language-independent type");
        }
        return languageIndependentMap_.at(name);
    }

    std::string TypesTranslator::GetLanguageSpecificType(Types type) const
    {
        if (!HasLanguageSpecificType(type))
        {
            throw std::runtime_error("unable to find language-specific type");
        }
        return languageSpecificMap_.at(type);
    }
}
