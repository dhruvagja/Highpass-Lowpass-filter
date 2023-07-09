#pragma once
#include<vector>
#include "JuceHeader.h"
using namespace std;

class LowpassHighpassFilter
{
public:
	void setHighpass(bool highpass);
	void setCutoffFrequency(float cutoffFrequency);
	void setSamplingRate(float samplingRate);

	void processBlock(juce::AudioBuffer<float>&, juce::MidiBuffer&);

private:
	bool highpass;
	float cutoffFrequency;
	float samplingRate;

	vector<float> dnBuffer;

};

