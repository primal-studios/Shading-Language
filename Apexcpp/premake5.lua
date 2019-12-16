workspace "Apex Parser"
    configurations {
        "Debug",
        "Release",
        "Dist"
    }

    architecture "x64"

    sln = solution()
    outputdir = "%{cfg.buildcfg}/%{cfg.system}/%{cfg.architecture}"

    IncludeDirs = {}

    LibDirs = {}

    BinDirs = {}

    project "Apex-Parser"
        kind "ConsoleApp"
        language "C++"
        cppdialect "C++17"
        staticruntime "Off"
        toolset "v142"
        systemversion "10.0.18362.0"

        local targetDirectory = "%{sln.location}\\bin\\apex-parser"
        local objectDirectory = "%{sln.location}\\bin-int\\apex-parser"

        objdir(objectDirectory)
        targetname("ApexParser")

        defines {
            "_CRT_SECURE_NO_WARNINGS"
        }

        ignoredefaultlibraries { 
            "MSVCRT"
        }

        files {
            "apexBaseVisitor.h",
            "apexBaseVisitor.cpp",
            "apexVisitor.h",
            "apexVisitor.cpp",
            "apexLexer.h",
            "apexLexer.cpp",
            "apexParser.h",
            "apexParser.cpp",
            "Main.cpp"
        }

        includedirs {
            "Dependencies/antlr/include"
        }

        flags {
            "MultiProcessorCompile"
        }

        libdirs {
            "Dependencies/antlr/lib"
        }

        links {
            "antlr4-runtime"
        }

        filter "configurations:Debug"
            targetdir(targetDirectory .. "\\debug\\")

            staticruntime "On"
            runtime "Debug"
    
            symbols "On"
    
        filter "configurations:Release"
            targetdir(targetDirectory .. "\\release\\")

            staticruntime "On"
            runtime "Release"
    
            optimize "On"
    
        filter "configurations:Dist"
            targetdir(targetDirectory .. "\\dist\\")

            staticruntime "On"
            runtime "Release"
    
            optimize "On"