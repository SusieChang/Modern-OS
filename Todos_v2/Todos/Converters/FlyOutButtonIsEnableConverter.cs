﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Windows.UI.Xaml.Data;

namespace Todos.Converters
{
    public class FlyOutButtonIsEnableConverter : IValueConverter
    {
        public object Convert(object value, Type targetType, object parameter, string language)
        {

            bool isChecked = (bool)value;
            if (isChecked == true) return false;
            else return true; 
    }

        public object ConvertBack(object value, Type targetType, object parameter, string language)
        {
            throw new NotImplementedException();
        }
    }
}