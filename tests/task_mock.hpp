#ifndef TASK_MOCK_HPP_FKQ408NU
#define TASK_MOCK_HPP_FKQ408NU

#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "task.hpp"

using namespace ::testing;

class task_mock: public staccato::task
{
public:
	task_mock() {};
	virtual ~task_mock() {};

	MOCK_METHOD0(execute, void());
};

#endif /* end of include guard: TASK_MOCK_HPP_FKQ408NU */