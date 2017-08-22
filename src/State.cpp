# include "State.h"

Subject::~Subject() { delete m_state; }
void Subject::setState(State *state) { m_state = state; }
void Subject::state1() { m_state->state1(this); }
void Subject::state2() { m_state->state2(this); }
void Subject::state3() { m_state->state3(this); }
void Subject::getState() { std::cout << m_state->m_state << std::endl; }

State1::State1() : State() {
    m_state = "State 1";
}

State2::State2() : State() {
    m_state = "State 2";
}

State3::State3() : State() {
    m_state = "State 3";
}

void State::state1(Subject *subject) { subject->getState(); }
void State::state2(Subject *subject) { subject->getState(); }
void State::state3(Subject *subject) { subject->getState(); }

void State1::state2(Subject *subject) {
    std::cout << "Switching to ";
    subject->setState(new State2());
    subject->getState();
    delete this;
}

void State2::state3(Subject *subject) {
    std::cout << "Switching to ";
    subject->setState(new State3());
    subject->getState();
    delete this;
}

void State3::state1(Subject *subject) {
    std::cout << "Switching to ";
    subject->setState(new State1());
    subject->getState();
    delete this;
}