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

#include "Shader.h"

namespace ShaderTool
{
    class ShaderHLSL : public Shader
    {
    public:
        ShaderHLSL(Stage stage) noexcept;

    protected:
        // Add language-specific shader lines
        virtual void AddLanguageSpecificLines() override;

        // Begin shader main function
        virtual void BeginMainFunction() override;
        // End shader main function
        virtual void EndMainFunction() override;

        // Begin shader function
        virtual void BeginFunction(const std::string &name, Types returnType, const std::vector<Argument> &arguments) override;
        // End shader function
        virtual void EndFunction() override;
    };
}
