// This file belongs to DesignPatternsCpp, a project designed to test and explore various C++ design patterns
// This source code is available under the MIT License
// Description: Definitions for implementation of the bridge design pattern, in which the interface and implementation specifics for creating fishing lures are abstracted behind LureType and LureCharacteristic base classes

# include "Bridge.h"

// Define derived implementaion class constructors
Color::Color(std::string in_color) { m_color = in_color; }
Weight::Weight(std::string in_weight) { m_weight = in_weight; }
Length::Length(std::string in_length) { m_length = in_length; }
Depth::Depth(std::string in_depth) { m_depth = in_depth; }

// Define get functionality for derived implementation classes
std::string Color::getCharacteristic() { return m_color; }
std::string Weight::getCharacteristic() { return m_weight; }
std::string Length::getCharacteristic() { return m_length; }
std::string Depth::getCharacteristic() { return m_depth; }

// Define get functionality for abstraction interface derived classes
void LeadJig::getLure() { std::cout << m_weight->getCharacteristic() << " " << m_color->getCharacteristic() << " " << "jig" << std::endl; }

void PlasticSoft::getLure() { std::cout << m_color->getCharacteristic() << " " << m_length->getCharacteristic() << " " << "soft plastic" << std::endl; }

void Crankbait::getLure() { std::cout << m_length->getCharacteristic() << " " << m_color->getCharacteristic() << " " << m_depth->getCharacteristic() << " " << "crankbait" << std::endl; }

void Spinnerbait::getLure() { std::cout << m_weight->getCharacteristic() << " " << m_color->getCharacteristic() << " " << "spinnerbait" << std::endl; }
