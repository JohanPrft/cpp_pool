/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:17:37 by jprofit           #+#    #+#             */
/*   Updated: 2023/08/21 11:17:37 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

int main()
{
	Serializer serializer;
	struct Data og_data;
	og_data.str = "Hello";
	og_data.nb = 42;

	std::cout << "og_data.str: "<< og_data.str << std::endl;
	std::cout << "og_data.nb: "<< og_data.nb << std::endl;
	std::cout << std::endl;

	uintptr_t serialized_data = serializer.serialize(&og_data);
	Data* deserialized_data = serializer.deserialize(serialized_data);
	std::cout << std::endl;

	if (&og_data == deserialized_data)
	{
		std::cout << "og_data == deserialized_data" << std::endl;
		std::cout << "deserialized_data->str: "<< deserialized_data->str << std::endl;
		std::cout << "deserialized_data->nb: "<< deserialized_data->nb << std::endl;
	}
	else
		std::cout << "og_data != deserialized_data" << std::endl;
	return 0;
}