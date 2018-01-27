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

#include "ShaderHLSL.h"

#include "TypesHLSL.h"

namespace ShaderTool
{
    ShaderHLSL::ShaderHLSL(Stage stage) noexcept
        : Shader(stage)
    {
        types_ = std::make_unique<TypesTranslatorHLSL>();
    }

    void ShaderHLSL::AddLanguageSpecificLines()
    {
    }

    void ShaderHLSL::BeginMainFunction()
    {
        lines_.push_back("void main()");
        lines_.push_back("{");
    }

    void ShaderHLSL::EndMainFunction()
    {
        lines_.push_back("}");
        lines_.push_back("");
    }

    void ShaderHLSL::BeginFunction(const std::string &name, Types returnType, const std::vector<Argument> &arguments)
    {
        lines_.push_back(types_->GetLanguageSpecificType(returnType) + std::string(" ") + name + std::string("(") + types_->GetLanguageSpecificType(arguments[0].type) + std::string(" ") + arguments[0].name + std::string(")"));
        lines_.push_back("{");
    }

    void ShaderHLSL::EndFunction()
    {
        lines_.push_back("}");
        lines_.push_back("");
    }
}
