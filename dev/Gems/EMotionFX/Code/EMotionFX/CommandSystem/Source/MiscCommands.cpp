/*
* All or portions of this file Copyright (c) Amazon.com, Inc. or its affiliates or
* its licensors.
*
* For complete copyright and license terms please see the LICENSE at the root of this
* distribution (the "License"). All use of this software is governed by the License,
* or, if provided, by the license below or the license accompanying this file. Do not
* remove or modify any license notices. This file is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*
*/

// include the required headers
#include "MiscCommands.h"
#include <MCore/Source/Command.h>
#include <MCore/Source/CommandGroup.h>
#include "CommandManager.h"
#include <EMotionFX/Source/Recorder.h>


namespace CommandSystem
{
    //--------------------------------------------------------------------------------
    // CommandRecorderClear
    //--------------------------------------------------------------------------------

    // constructor
    CommandRecorderClear::CommandRecorderClear(MCore::Command* orgCommand)
        : MCore::Command("RecorderClear", orgCommand)
    {
    }


    // destructor
    CommandRecorderClear::~CommandRecorderClear()
    {
    }


    // execute
    bool CommandRecorderClear::Execute(const MCore::CommandLine& parameters, MCore::String& outResult)
    {
        MCORE_UNUSED(parameters);
        MCORE_UNUSED(outResult);
        EMotionFX::GetRecorder().Clear();
        return true;
    }


    // undo the command
    bool CommandRecorderClear::Undo(const MCore::CommandLine& parameters, MCore::String& outResult)
    {
        MCORE_UNUSED(parameters);
        MCORE_UNUSED(outResult);
        return true;
    }


    // init the syntax of the command
    void CommandRecorderClear::InitSyntax()
    {
    }


    // get the description
    const char* CommandRecorderClear::GetDescription() const
    {
        return "This command clears any existing recording inside the recorder.";
    }
} // namespace CommandSystem
