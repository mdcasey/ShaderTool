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

#include "Types.h"

#include <memory>
#include <string>
#include <vector>

namespace ShaderTool
{
    struct Argument
    {
        Types       type;
        std::string name;
    };

    enum class Stage
    {
        Vertex,
        Pixel,
        Domain,
        Hull,
        Geometry,
        Compute
    };

    class Shader
    {
    public:
        Shader(Stage stage) noexcept;

        // Generate a shader file
        void Generate(const std::string &filename);

    protected:
        // Add language-specific shader lines
        virtual void AddLanguageSpecificLines() = 0;

        // Begin shader main function
        virtual void BeginMainFunction() = 0;
        // End shader main function
        virtual void EndMainFunction() = 0;

        // Begin shader function
        virtual void BeginFunction(const std::string &name, Types returnType, const std::vector<Argument> &arguments) = 0;
        // End shader function
        virtual void EndFunction() = 0;

        Stage                            stage_;
        std::vector<std::string>         lines_;
        std::unique_ptr<TypesTranslator> types_;
    };
}
